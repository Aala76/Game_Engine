#pragma once

#include "ManifestUtils.h"
#include "GameWindow.h"
#include "pch.h"

#define FRAMES_PER_SECOND 30

namespace Manifest
{
	class MANIFEST_API ManifestApp
	{
	public:
		void Run();
		virtual void OnUpdate();
		virtual void OnKeyPressed(KeyPressedEvent &event);
		int GetGameWindowWidth() const;
		int GetGameWindowHeight() const;

	protected:
		ManifestApp();

	private:
		GameWindow mGameWindow;

		std::chrono::steady_clock::time_point mTimeOfNextFrame;
		std::chrono::milliseconds mFrameDuration{ 1000 / FRAMES_PER_SECOND };

	};


}

