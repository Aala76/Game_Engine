#include "pch.h"
#include "Events.h"

namespace Manifest
{
	KeyPressedEvent::KeyPressedEvent(int KeyCode): mKeyCode(KeyCode)
	{
	}

	int KeyPressedEvent::GetKeyCode() const
	{
		return mKeyCode;
	}
}