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
	ImGui::Begin("Situation description", nullptr, Globals::windowFlags);
	ImGui::SetCursorPosX(ImGui::GetWindowWidth() * 0.5f - ImGui::CalcTextSize(description.c_str()).x * 0.5f);
	ImGui::Text(description.c_str());
	ImGui::End();

	ImGui::SetNextWindowPos({ Globals::screen.w * 0.5f, Globals::screen.h * 0.5f }, 0, { 0.5f, 0.5f });
	ImGui::Begin("Options", nullptr, Globals::windowFlags);
	for (std::map<std::string, Situation>::iterator i{ branches.begin() }; i != branches.end(); i++)
		if (ImGui::Button(i->first.c_str()))
		{
			Globals::pastSituation = Globals::currentSituation;
			Globals::currentSituation = branches.find(i->first);
		}
	ImGui::End();

	ImGui::SetNextWindowPos({ Globals::screen.w * 0.5f, Globals::screen.h * 0.9f }, 0, { 0.5f, 0.5f });
	ImGui::Begin("Back", nullptr, Globals::windowFlags);
	if (ImGui::Button("Back"))
		Globals::currentSituation = Globals::pastSituation;
	ImGui::End();
}

std::map<std::string, Situation>& Situation::getMap()
{
	return branches;
}