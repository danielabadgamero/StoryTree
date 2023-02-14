#ifndef GLOBALS_H
#define GLOBALS_H

#include <map>
#include <string>
#include <vector>

#include <SDL.h>
#include <imgui.h>

#include "Situation.h"

namespace Globals
{
	inline SDL_Window* window{ nullptr };
	inline SDL_Renderer* renderer{ nullptr };
	inline SDL_Event e{};
	inline SDL_Rect screen{ 1600, 900 };
	inline std::map<std::string, Situation>::iterator currentSituation{};
	inline std::vector<std::map<std::string, Situation>::iterator> pastSituations{};

	inline ImGuiWindowFlags windowFlags
	{
		ImGuiWindowFlags_NoDecoration |
		ImGuiWindowFlags_AlwaysAutoResize
	};
}

#endif