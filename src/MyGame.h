//
// Created by Diego S. Seabra on 2023-04-15
//

#ifndef ALCHYMIA_GAME_H
#define ALCHYMIA_GAME_H

#include "../src/engine/api/Game.h"

#include <glm/glm.hpp>
#include <iostream>

namespace Elixir
{
	class MyGame : public Game
	{
	public:
		void Init() override;
		void Update() override;
		void Shutdown() override;
	};
}

#endif //ALCHYMIA_GAME_H
