#pragma once

#include "ManifestApp.h"
#include "ManifestUtils.h"

#define START_MANIFEST_GAME(classname) \
int main()\
{\
	classname _manifest_game;\
	_manifest_game.Run();\
}