//
// Created by Diego S. Seabra on 2023-02-21
//

#ifndef GAME_SYSTEMS_H
#define GAME_SYSTEMS_H

#include <entt/entt.hpp>

namespace ElixirGame
{
	class GameSystems
	{
	public:
		static void Update(entt::registry& registry);
	};
}

#endif //GAME_SYSTEMS_H
