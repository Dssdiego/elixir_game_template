//
// Created by Diego S. Seabra on 2023-04-15
//

#include "MyGame.h"

#include "../../src/engine/profiling/Logger.h"
#include "../../src/engine/entities/ECS.h"
#include "../../src/engine/common/Assets.h"
#include "../../src/engine/rendering/Camera.h"
#include "../../src/engine/components/Transform.h"
#include "../../src/engine/components/Sprite.h"
#include "../../src/engine/components/AnimatedSprite.h"
#include "../../src/engine/components/Text.h"

using namespace ElixirGame;

void MyGame::Init()
{
	Logger::Info("My game init");

	// setting camera stuff
	Camera::SetOrtographicZoom(0.5f);
	Camera::SetWorldPosition(glm::vec3(3.25f, 0.8f, 0.f));

	auto bird = ECS::Create("Bird");
	AnimatedSprite birdAnimSpr =
	{
		Color::White,
		"sprite",
		"game_sprites",
		0,
		5,
		0.1f,
		0.f,
		1,
		true
	};
	ECS::AddComponent(bird, Transform{});
	ECS::AddComponent(bird, birdAnimSpr);

	auto bomb = ECS::Create("Bomb");
	AnimatedSprite bombAnimSpr =
	{
		Color::White,
		"sprite",
		"game_sprites",
		10,
		12,
		0.1f,
		0.f,
		10,
		true
	};
	ECS::AddComponent(bomb, Transform{});
	ECS::AddComponent(bomb, bombAnimSpr);

	auto explosion = ECS::Create("Explosion");
	AnimatedSprite explosionAnimSpr =
	{
		Color::White,
		"sprite",
		"game_sprites",
		16,
		21,
		0.1f,
		0.f,
		16,
		true
	};
	ECS::AddComponent(explosion, Transform{});
	ECS::AddComponent(explosion, explosionAnimSpr);

	auto engineNameText = ECS::Create("Text");
	Text textComp =
	{
		"Elixir Game Engine",
		0.25f,
		true
	};
	ECS::AddComponent(engineNameText, textComp);
}

void MyGame::Update()
{

}

void MyGame::Shutdown()
{
	Logger::Info("My game shutdown");
}
