#include "AvgEditor.h"

namespace AVGE
{
    Editor::Editor()
    {
        Init(); 
    }

    Editor::~Editor()
    {
    }

    void Editor::Init()
    {
        //TODO: Initialize the editor and load and initialize the core modules of the editor
    }

    void Editor::Tick()
    {
    }

    void Editor::Shutdown()
    {
    }

    Editor* Editor::GetInstance()
    {
        static Editor instance;
        return &instance;
    }

}