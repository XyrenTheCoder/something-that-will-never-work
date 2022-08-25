// hi i am torturing myself with cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    string ans;
    
    cout << "Available commands: add (a), subtract (s), multiply (m), divide (d), sine (sin), cosine (cos), tangent (tan)";
    cin >> ans;
    if(ans == "a" || ans == "s" || ans == "m" || ans == "d" || ans == "sin" || ans == "cos" || ans == "tan"){
        //python pass moment
    }else{
        cout << "That option doesnt exist. Are u stupid?";
        return 0;
    }
    
    if(ans == "sin" || ans == "cos" || ans == "tan"){
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
    }else if(ans == "sin"){
        cout << sin(num1);
    }else if(ans == "cos"){
        cout << cos(num1);
    }else if(ans == "tan"){
        cout << tan(num1);
    };
    return 0;
}
