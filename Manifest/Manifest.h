#pragma once

#include "ManifestApp.h"
#include "ManifestUtils.h"
#include "GameWindow.h"
#include "Sprite.h"
#include "Shader.h"
#include "Renderer.h"
#include "Events.h"
#include "KeyCodes.h"



#define START_MANIFEST_GAME(classname)\
int main()\
{\
	classname _manifest_game;\
	_manifest_game.Run();\
}