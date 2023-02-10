#include <string>
#include <map>

#include "Situation.h"
#include "Globals.h"

#include <SDL.h>
#include <imgui.h>

Situation::Situation()
{

}

void Situation::addChild(std::string text)
{
	branches.emplace(text, Situation());
}

Situation& Situation::getChild(std::string child)
{
	return branches.at(child);
}

void Situation::draw(std::string description)
{
	ImGui::SetNextWindowPos({ Globals::screen.w * 0.5f, Globals::screen.h * 0.1f }, 0, { 0.5f, 0.5f });
	ImGui::Begin("Situation description", nullptr, ImGuiWindowFlags_NoDecoration);
	ImGui::Text();
	ImGui::End();
}

std::map<std::string, Situation>& Situation::getMap()
{
	return branches;
}