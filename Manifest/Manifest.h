#pragma once

#include "ManifestApp.h"
#include "ManifestUtils.h"
#include "GameWindow.h"

#define START_MANIFEST_GAME(classname)\
int main()\
{\
	classname _manifest_game;\
	_manifest_game.Run();\
}