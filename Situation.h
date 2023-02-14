#ifndef SITUATION_H
#define SITUATION_H

#include <SDL.h>

#include <imgui.h>

#include <string>
#include <map>

class Situation
{
private:
	std::map<std::string, Situation> branches{};
	SDL_Texture* image{};
	void addImage(std::string);
public:
	Situation();
	void addChild(std::string, std::string);
	Situation& getChild(std::string);
	std::map<std::string, Situation>& getMap();
	void draw(std::string);
};

#endif