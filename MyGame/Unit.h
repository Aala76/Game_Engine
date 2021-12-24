#pragma once

#include "Manifest.h"

class Unit
{
public:
	Unit() = delete;
	Unit(const std::string& imageFile, int xPos, int yPos, int speed);
	int GetUnitWidth() const;
	int GetUnitHeight() const;
	void setPosX(int newX);
	void setPosY(int newY);
	int GetPosX() const;
	int GetPosY() const;
	int GetSpeed() const;

	//collidewith returns true  is this unit and other unit collide(overlap)
	bool CollideWith(const Unit &other) const;
	
	void Draw(Manifest::Shader & shader);

	enum class Direction {
		None,
		Up,
		Down,
		Left,
		Right
	};

	Unit::Direction GetDirection() const;
	void SetDirection(Unit::Direction newDirection);

	void UpdatePosition();

private:
	bool IsPositionPossible(int newX, int newY) const;

	Manifest::Sprite mImage;
	int mPosX;
	int mPosY;
	int mSpeed;

	Direction mDirection;
};

