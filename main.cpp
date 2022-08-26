// hi i am torturing myself with cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    string ans;
    
    cout << "Available commands: add (a), subtract (s), multiply (m), divide (d), sine (sin), cosine (cos), tangent (tan): \n";
    cin >> ans;
    if(ans == "a" || ans == "s" || ans == "m" || ans == "d" || ans == "sin" || ans == "cos" || ans == "tan"){
        continue; //python pass moment, bloated and ik, it just feels weird with nothing inside
    }else{
        cout << "That option doesnt exist. Are u stupid?";
        return 69420;
    }
    
    if(ans == "sin" || ans == "cos" || ans == "tan" || ans == "sinh" || ans == "cosh" || ans == "tanh"){
        cout << "x = ?: ";
        cin >> num1;
    }else if(ans == "a" || ans == "s" || ans == "m" || ans == "d"){
        cout << "x = ?: ";
        cin >> num1;
        cout << "y = ?: ";
        cin >> num2;
    };
        
    if(ans == "a"){
        cout << num1 + num2;
    }else if(ans == "s"){
        cout << num1 - num2;
    }else if(ans == "m"){
        cout << num1 * num2;
    }else if(ans == "d"){
        cout << num1 / num2;
    }else if(ans == "sin"){ //trigo starts here
        cout << sin(num1);
    }else if(ans == "cos"){
        cout << cos(num1);
    }else if(ans == "tan"){
        cout << tan(num1);
    }else if(ans == "sinh"){
        cout << sinh(num1);
    }else if(ans == "cosh"){
        cout << cosh(num1);
    }else if(ans == "tanh"){
        cout << tanh(num1);
    };
    return 0;
}
