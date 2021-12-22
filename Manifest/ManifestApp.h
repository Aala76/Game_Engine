#pragma once

#include "ManifestUtils.h"
#include "GameWindow.h"
#include "pch.h"

namespace Manifest
{
	class MANIFEST_API ManifestApp
	{
	public:
		void Run();
		virtual void OnUpdate();

	protected:
		ManifestApp();

	private:
		GameWindow mGameWindow;

	};


}

