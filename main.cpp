#include <SDL.h>
#include <SDL_image.h>
#include <SDL_net.h>

#include <imgui.h>
#include <backends/imgui_impl_sdl.h>
#include <backends/imgui_impl_sdlrenderer.h>

#include "Globals.h"
#include "Situation.h"

inline void createTree(Situation* top)
{
	top->addChild("The elephant is out of control!", "D:\\Projects\\StoryTree\\title.jpg");
	top->getChild("The elephant is out of control!").addChild("Get your rifle.", "D:\\Projects\\StoryTree\\rifle.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").addChild("You arrive later.", "D:\\Projects\\StoryTree\\elephant.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").addChild("Everything around you is ravaged.", "D:\\Projects\\StoryTree\\elephant2.webp");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").addChild("Ask natives about the elephant.", "D:\\Projects\\StoryTree\\elephant3.webp");
 	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").addChild("They provide misleading answers.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").addChild("You find a coolie killed by the elephant.", "D:\\Projects\\StoryTree\\ele2.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").addChild("Go back to get your elephant rifle.", "D:\\Projects\\StoryTree\\elephant_rifle.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").addChild("A crowd begins to form behind you.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").addChild("You find yourself by the road and see the elephant calmly eating grass.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").addChild("Shoot the elephant.", "D:\\Projects\\StoryTree\\elephantShot.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").addChild("Don't shoot the elephant.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").addChild("Run away.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").getChild("Run away.").addChild("You look a fool.", "D:\\Projects\\StoryTree\\aFool.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").addChild("Get closer.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").getChild("Get closer.").addChild("The elephant notices you.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").getChild("Get closer.").getChild("The elephant notices you.").addChild("Shoot the elephant.", "D:\\Projects\\StoryTree\\elephantShot.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").getChild("Get closer.").getChild("The elephant notices you.").addChild("Run away.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Don't shoot the elephant.").getChild("Get closer.").getChild("The elephant notices you.").getChild("Run away.").addChild("You look a fool", "D:\\Projects\\StoryTree\\aFool.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").addChild("Shoot in the air.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Go back to get your elephant rifle.").getChild("A crowd begins to form behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Shoot in the air.").addChild("Burmese laugh. You look a fool.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").addChild("Continue with your regular rifle.", "D:\\Projects\\StoryTree\\rifle.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Continue with your regular rifle.").addChild("There is no crowd behind you.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Continue with your regular rifle.").getChild("There is no crowd behind you.").addChild("You find yourself by the road and see the elephant calmly eating grass.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Continue with your regular rifle.").getChild("There is no crowd behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").addChild("Run away.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Continue with your regular rifle.").getChild("There is no crowd behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Run away.").addChild("Some time later, you find out the elephant killed thousands of Burmese.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Continue with your regular rifle.").getChild("There is no crowd behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").addChild("Get closer.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Ask natives about the elephant.").getChild("They provide misleading answers.").getChild("You find a coolie killed by the elephant.").getChild("Continue with your regular rifle.").getChild("There is no crowd behind you.").getChild("You find yourself by the road and see the elephant calmly eating grass.").getChild("Get closer.").addChild("The elephant starts running towards you and kills you. And you look a fool.", "D:\\Projects\\StoryTree\\aFool.jpg");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").addChild("Try to find it on your own.", "");
	top->getChild("The elephant is out of control!").getChild("Get your rifle.").getChild("You arrive later.").getChild("Everything around you is ravaged.").getChild("Try to find it on your own.").addChild("After a long time, the elephant has destroyed the village. And it kills you. And you look a fool.", "D:\\Projects\\StoryTree\\aFool.jpg");
	top->getChild("The elephant is out of control!").addChild("Go directly to the place of events.", "D:\\Projects\\StoryTree\\burma_village.jpg");
	top->getChild("The elephant is out of control!").getChild("Go directly to the place of events.").addChild("You are unarmed and find the elephant out of control. It kills you and the whole village. And you look a fool.", "D:\\Projects\\StoryTree\\elephant3.webp");

	SDL_Log("Story tree successfully created.");
}

int main(int argc, char* argv[])
{	argc; argv;

	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG | IMG_INIT_WEBP);
	SDLNet_Init();

	Globals::window = SDL_CreateWindow("Shooting an Elephant", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Globals::screen.w, Globals::screen.h, SDL_WINDOW_MAXIMIZED | SDL_WINDOW_RESIZABLE);
	Globals::renderer = SDL_CreateRenderer(Globals::window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io{ ImGui::GetIO() }; (void)io;
	ImGui_ImplSDL2_InitForSDLRenderer(Globals::window, Globals::renderer);
	ImGui_ImplSDLRenderer_Init(Globals::renderer);
	io.Fonts->AddFontFromFileTTF("D:\\Projects\\StoryTree\\font.ttf", 32.0f);

	SDL_Log("Successfully initialized. Window size: %dx%d", Globals::screen.w, Globals::screen.h);

	bool isRunning{ true };

	Situation top{};

	createTree(&top);

	Globals::currentSituation = top.getMap().find("The elephant is out of control!");

	while (isRunning)
	{
		while (SDL_PollEvent(&Globals::e))
		{
			ImGui_ImplSDL2_ProcessEvent(&Globals::e);

			switch (Globals::e.type)
			{
			case SDL_QUIT:
				isRunning = false;
				break;
			case SDL_WINDOWEVENT:
				SDL_GetWindowSize(Globals::window, &Globals::screen.w, &Globals::screen.h);
				break;
			}
		}

		ImGui_ImplSDLRenderer_NewFrame();
		ImGui_ImplSDL2_NewFrame();
		ImGui::NewFrame();

		Globals::currentSituation->second.draw(Globals::currentSituation->first);

		ImGui::Render();
		SDL_SetRenderDrawColor(Globals::renderer, 0x10, 0x10, 0x10, 0xFF);
		SDL_RenderClear(Globals::renderer);
		ImGui_ImplSDLRenderer_RenderDrawData(ImGui::GetDrawData());
		SDL_RenderPresent(Globals::renderer);
	}

	ImGui_ImplSDLRenderer_Shutdown();
	ImGui_ImplSDL2_Shutdown();
	ImGui::DestroyContext();

	SDL_DestroyWindow(Globals::window);
	SDL_DestroyRenderer(Globals::renderer);
	
	Globals::window = nullptr;
	Globals::renderer = nullptr;
	
	SDL_Quit();
	IMG_Quit();
	SDLNet_Quit();

	return 0;
}