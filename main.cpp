// hi i am torturing myself cpp
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double num1, num2;
    string ans;
    
    cout << "Available commands: add (a), subtract (s), multiply (m), or divide (d) ";
    cin >> ans;
    if(ans == "a" || ans == "s" || ans == "m" || ans == "d"){
        //
    }else{
        cout << "That option doesnt exist. Are u stupid?";
        return 0;
    }
    
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    if(ans == "a"){
        cout << num1 + num2;
    }else if(ans == "s"){
        cout << num1 - num2;
    }else if(ans == "m"){
        cout << num1 * num2;
    }else if(ans == "d"){
        cout << num1 / num2;
    };
    return 0;
}

