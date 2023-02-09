#ifndef GLOBALS_H
#define GLOBALS_H

#include <SDL.h>

namespace Globals
{
	inline SDL_Window* window{ nullptr };
	inline SDL_Renderer* renderer{ nullptr };
	inline SDL_Event e{};
}

#endif