#include "GameLogics.h"
#include "Menus.h"
#include "Variables.h"
#include <string>
#include <iostream>

int main(){
    int Choice; // Menu selection
    int BuyAmount; // For buying equipment
    
    // Ask user for channel name
    std::cout << "Enter a channel name, ";
    std::getline(std::cin, Channel_Name);
    Pause();

     while(true){
        Clear_Console(); // Clear screen
        Limits(); // Prevent the variable's value from dropping below 0.

        Statistics(); // Shows the stats
        Main_Menu(); // Shows the main menu and handles user interaction
        
        // Get selection from user
        std::cout << "Choice: ";
        std::cin >> Choice;

         switch(Choice){
            case 0:
               return 0; // Exit game

            case 1:
               // Upload a video: increase money, subs, views, and total videos
               Money += (Equipment_Quality * 24.5);
               Subs += (Total_Video * 3);
               Views += (Total_Video * 4);
               Total_Video++;
               Pause();
               break;

            case 2:
               // Buy equipment
               std::cout << "( $100 = 1.0x) Enter the amount: $";
               std::cin >> BuyAmount;

                if (BuyAmount >= 100.0){
                    Money -= BuyAmount; // Deduct money
                    Equipment_Quality += (BuyAmount / 100.0); // Increase equipment
                    Pause();
                } 
                else {
                    std::cout << "Insufficient money..";
                    Pause();
                }
                break;

            default:
               // Invalid menu selection
               std::cout << "Invalid selection....";
               Pause();
               break;
         }
     }
}