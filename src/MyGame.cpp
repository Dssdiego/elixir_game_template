//
// Created by Diego S. Seabra on 2023-04-15
//

#include "MyGame.h"

#include "../../src/engine/profiling/Logger.h"
#include "../../src/engine/entities/ECS.h"
#include "../../src/engine/common/Assets.h"
#include "../../src/engine/rendering/Camera.h"

using namespace Feather;

void MyGame::Init()
{
	Logger::Info("My game init");

	// setting camera stuff
	Camera::SetOrtographicZoom(0.5f);
	Camera::SetWorldPosition(glm::vec3(3.25f, 0.8f, 0.f));
}

void MyGame::Update()
{

}

void MyGame::Shutdown()
{
	Logger::Info("My game shutdown");
}

