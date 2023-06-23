//
// Created by Diego S. Seabra on 14/02/23
//

#include <iostream>
#include "../src/engine/api/Engine.h"
#include "../src/engine/common/Config.h"
#include "MyGame.h"

using namespace Elixir;
using namespace ElixirGame;

int main()
{
	Engine engine;
	MyGame game;

	EngineConfig config{
			"Game Template",
			{Config::GetWindowWidth(), Config::GetWindowHeight()},
			{320, 240},
			Config::GetSaveToLogFile() // FIXME: Logger saves automatically so this config is useless right now!
	};
	try {
		engine.Init(&config, &game);
		engine.Run();
		engine.Cleanup();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}