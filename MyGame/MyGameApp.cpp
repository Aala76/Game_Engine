#include "MyGameApp.h"

MyGameApp::MyGameApp() :  mHero("Assets/Texture/heroa.png", 0, 0, 10), mCat("Assets/Texture/koshka.png", 10, 50, 10), mBackground("Assets/Texture/retro2.png", 0, 0,10), mFrameCounter(0)
{
	mShader.Load("Assets/Shader/myVertexShader.glsl",
		"Assets/Shader/myFragmentShader.glsl");
	mShader.SetVec2IntUniform("screenSize", 800, 800);
}

void MyGameApp::OnUpdate()
{
	mBackground.UpdatePosition();
	mBackground.Draw(mShader);
	mCat.UpdatePosition();
	mHero.UpdatePosition();

	//updadte existing viruses 
	for (auto& virus : mViruses)
	{
		virus.UpdatePosition();
	}

	for (auto& infection : mInfected)
	{
		infection.UpdatePosition();
	}


	//Introduce new virus every sec
	if (mFrameCounter % FRAMES_PER_SECOND == 0 && mViruses.size() <10)
	{
		
		int newX{ rand() % 700 };
		int newY{ rand() % 700 };

		Unit::Direction newDir;
		int dirVal{ rand() % 4 };
		if (dirVal == 0)
			newDir = Unit::Direction::Down;
		else if (dirVal == 1)
			newDir = Unit::Direction::Up;
		else if (dirVal == 2)
			newDir = Unit::Direction::Left;
		else 
			newDir = Unit::Direction::Right;


		mViruses.push_back(Unit{"Assets/Texture/redvirus.png", newX, newY, 10 });
		mViruses.back().SetDirection(newDir);
	}


	
	//check collitions

	auto it = mViruses.begin();
	while (it != mViruses.end())
	{
		if (mHero.CollideWith(*it))
			it = mViruses.erase(it);
		else
			it++;
	}



	if (mFrameCounter% FRAMES_PER_SECOND == 0 && mInfected.size() < 5)
	{

		int aX{ rand() % 600 };
		int aY{ rand() % 700 };
		Unit::Direction virusadir;

		int dirVal{ rand() % 4 };
		if (dirVal == 0)
			virusadir = Unit::Direction::Down;
		else if (dirVal == 1)
			virusadir = Unit::Direction::Up;
		else if (dirVal == 2)
			virusadir = Unit::Direction::Left;
		else
			virusadir = Unit::Direction::Right;


		mInfected.push_back(Unit{ "Assets/Texture/virusa.png", aX, aY, 10 });
		mInfected.back().SetDirection(virusadir);
	}

	auto inf = mInfected.begin();
	while (inf != mInfected.end())
	{
		if (mCat.CollideWith(*inf))
			inf = mInfected.erase(inf);
		else
			inf++;
	}
	
	for (auto& virus : mViruses)
		virus.Draw(mShader);

	for (auto& infected : mInfected)
		infected.Draw(mShader);


	mHero.Draw(mShader);

	mCat.Draw(mShader);
	
	mFrameCounter++;

	
}

void MyGameApp::OnKeyPressed(Manifest::KeyPressedEvent& event)
{	
		
	switch (event.GetKeyCode())
	{
	case MANIFEST_KEY_LEFT:
		//mHero.setPosX(mHero.GetPosX() - mHero.GetSpeed());
		mHero.SetDirection(Unit::Direction::Left);
		mCat.SetDirection(Unit::Direction::Right);
		break;

	case MANIFEST_KEY_RIGHT:
		//mHero.setPosX(mHero.GetPosX() + mHero.GetSpeed());
		mHero.SetDirection(Unit::Direction::Right);
		mCat.SetDirection(Unit::Direction::Left);
		break;

	case MANIFEST_KEY_DOWN:
		//mHero.setPosY(mHero.GetPosY() - mHero.GetSpeed());
		mHero.SetDirection(Unit::Direction::Down);
		mCat.SetDirection(Unit::Direction::Up);
		break;

	case MANIFEST_KEY_UP:
		//mHero.setPosY(mHero.GetPosY() +  mHero.GetSpeed());
		mHero.SetDirection(Unit::Direction::Up);
		mCat.SetDirection(Unit::Direction::Down);
		break;
	}
}
