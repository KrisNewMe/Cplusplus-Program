//
//  main.cpp
//  PROJECT_TWO
//
//  Created by Kristopher Collis on 1/26/22.
//
#include "project_two.hpp"
using namespace std;

int main()
{
    char userInput = 'y'
        ;
    while (1)
    {
    
    Display display;
    display.SetInputDisplay();	
    display.SetBalanceWithoutDeposit();
    display.SetBalanceWithDeposit();
    cout << "Would you like to try a different value? (Y/y or N/n): ";
    cin >> userInput;

    if (userInput != 'y' && userInput != 'Y')
    {
        return 0;
    }
}
  return 0;
}
