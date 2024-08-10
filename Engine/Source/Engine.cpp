#include "Engine.h"

namespace AVGE
{
    Engine::Engine()
    {
        Init(); 
    }

    Engine::~Engine()
    {
    }

    void Engine::Init()
    {
        // TODO: Initialize the engine and load and initialize the core modules of the engine

    }

    void Engine::Tick()
    {
    }

    void Engine::Shutdown()
    {
    }

    Engine* Engine::GetInstance()
    {
        static Engine instance;
        return &instance;
    }
}