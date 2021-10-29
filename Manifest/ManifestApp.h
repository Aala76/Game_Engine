#pragma once

#include "ManifestUtils.h"

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

	};


}

