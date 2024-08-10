#include "AvgEditor.h"
#include <iostream>

int main()
{
    AVGE::Editor* Editor = AVGE::Editor::GetInstance();
    Editor->Tick();
    Editor->Shutdown();

    return 0;
}