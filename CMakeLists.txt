cmake_minimum_required(VERSION 3.10)

project(YoutuberSimulator)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Define the executable target
add_executable(main
    src/Main.cpp
    src/GameLogics.cpp
    src/Menus.cpp
    src/Variables.cpp
)

# Specify the include directories for the target
target_include_directories(main PRIVATE include)