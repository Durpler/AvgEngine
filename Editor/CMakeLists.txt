# Editor CmakeLists.txt
project(AvgEditor)
add_executable(AvgEditor Source/Main.cpp Source/AvgEditor.cpp)

target_include_directories(AvgEngine PUBLIC Source)

target_link_libraries(AvgEditor PUBLIC AvgEngine)