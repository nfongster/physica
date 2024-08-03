#include "Engine.h"

Engine::Engine() : m_system(new SystemState())
{
}

Engine::~Engine()
{
	delete m_system;
}

void Engine::Run()
{
	std::cout << "Welcome to the Physis (f-EYE-sis) Engine." << '\n';
	auto particle = m_system->GetParticle();

	/*std::cout << "rx\try\tvx\tvy\tax\tay\n";
	particle->PrintState();*/
}
