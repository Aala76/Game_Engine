#pragma once

#include "ManifestUtils.h"

namespace Manifest
{
	class MANIFEST_API KeyPressedEvent
	{
	public:
		KeyPressedEvent(int KeyCode);
		int GetKeyCode() const;
	private:
		int mKeyCode{ -1 };
	};
}