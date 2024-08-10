#pragma once

namespace AVGE
{
    // Main Engine Class - Needs to be a singleton, since there can only be one engine running at a time
    class Engine
    {
    public:
        Engine();
        ~Engine();      

        // Update the engine
        void Tick();

        // Shutdown the engine
        void Shutdown();

        // Get the engine instance
        static Engine* GetInstance();


        private: 
            
            // Initialize the engine
            void Init();

            // Private constructor to prevent multiple instances of the engine
            Engine(const Engine&) = delete;
            Engine& operator=(const Engine&) = delete;
        
    };
}