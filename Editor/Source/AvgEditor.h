#ifndef AVGE_EDITOR_H
#define AVGE_EDITOR_H
namespace AVGE
{
    // Main Editor Class - Needs to be a singleton, since there can only be one editor running at a time
    class Editor
    {
    public:
        Editor();
        ~Editor();      
        
        // Update the editor
        void Tick();
        
        // Shutdown the editor
        void Shutdown();
        
        // Get the editor instance
        static Editor* GetInstance();
        
        private: 
            
            // Initialize the editor
            void Init();
            
            // Private constructor to prevent multiple instances of the editor
            Editor(const Editor&) = delete;
            Editor& operator=(const Editor&) = delete;
        
    };
}
#endif