#include "Menus.h"
#include "Variables.h"
#include <string>
#include <iostream>

void Statistics(){
    // Stripes for a stylish look ↓
    std::cout << "---------------------------------------------\n";
    
    // Print the user's channel name to the screen ↓
    std::cout << "Channel: " << Channel_Name << "\n";

    // Print the user's money to the screen ↓
    std::cout << "Money: $" << Money << "\n";
    
    // Stripes for a stylish look ↓
    std::cout << "---------------------------------------------\n";

    // Print the user's equipment quality to the screen ↓
    std::cout << "Equipment Quality: " << Equipment_Quality << "x\n";

    // Print the user's subs to the screen ↓
    std::cout << "Subs: " << Subs << "\n";

    // Print the user's views to the screen ↓
    std::cout << "Views: " << Views << "\n";

    // Print the user's total videos to the screen ↓
    std::cout << "Total Videos: " << Total_Video << "\n";

    // Stripes for a stylish look ↓
    std::cout << "---------------------------------------------\n";
}

void Main_Menu(){
    // Option 1 ↓
    std::cout << "1) Upload Video\n";

    // Option 2 ↓
    std::cout << "2) Upgrade equipment quality\n";

    // Option 0 ↓
    std::cout << "0) Exit\n";
}