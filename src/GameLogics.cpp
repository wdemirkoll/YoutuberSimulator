#include "GameLogics.h"
#include "Variables.h"
#include <iostream>

void Limits(){
    // Prevent the variable's value from dropping below 0.
    if (Money < 0) Money = 0; 
    if (Subs < 0) Subs = 0; 
    if (Views < 0) Views = 0;
    if (Equipment_Quality < 0) Equipment_Quality = 0; 
    if (Total_Video < 0) Total_Video = 0;
}

void Clear_Console(){
    // Clear console screen depending on operating system
    #ifndef _WIN32
         system("cls"); // Windows
    #else
         system("clear"); // Linux / macOS
    #endif
}

void Pause(){
    // Wait for user to press Enter before continuing
    std::cout << "\nClick enter to continue....";
    std::cin.ignore(); // Clear leftover input from buffer
    std::cin.get(); // Wait for Enter key
}