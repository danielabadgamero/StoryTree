#ifndef GLOBALS_H
#define GLOBALS_H

#include <map>
#include <string>

#include <SDL.h>
#include <imgui.h>

#include "Situation.h"

namespace Globals
{
	inline SDL_Window* window{ nullptr };
	inline SDL_Renderer* renderer{ nullptr };
	inline SDL_Event e{};
	inline SDL_Rect screen{};
	inline std::map<std::string, Situation>::iterator pastSituation{};
	inline std::map<std::string, Situation>::iterator currentSituation{};

	inline ImGuiWindowFlags windowFlags
	{
		ImGuiWindowFlags_NoDecoration |
		ImGuiWindowFlags_AlwaysAutoResize
	};
}

#endif