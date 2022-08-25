// hi i am torturing muself cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    string ans;
    
    cout << "add (a), subtract (s), multiply (m), or divide (d) two numbers? "; 
    cin >> ans;
    if(ans == "a" || ans == "s" || ans == "m" || ans == "d"){
        //
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

