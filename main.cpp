// My first CPP program!
// Created 2/2/2021 by Nanobot567

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int num1, num2; // define variables
    string ans;
    
    std::cout << "Would you like to add (a), subtract (s), multiply (m), or divide (d) two numbers? "; 
    std::cin >> ans;
    if(ans == "a" || ans == "s" || ans == "m" || ans == "d"){ // checks if the string is valid
        // nothing would happen :D
    }
    else
    {
        std::cout << "Sorry, I didn't understand that. Please restart the program and try again.";
        return 0;
    }
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    if(ans == "a"){ // determines what the script should do if the ans string is a certain char.
        std::cout << num1 + num2;
    }
    else if(ans == "s"){
        std::cout << num1 - num2;
    }
    else if(ans == "m"){
        std::cout << num1 * num2;
    }
    else if(ans == "d"){
        std::cout << num1 / num2;
    };
    return 0; // ends the program
}

