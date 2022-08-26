// hi i am torturing myself with cpp
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    string ans;
    
    cout << "Available commands:\nBasic operations:\nadd (a), subtract (s), multiply (m), divide (d)\nTrigonometry:\nsine (sin), cosine (cos), tangent (tan)\nHyperbolic trigonometry:\nsine (sinh), cosine (cosh), tangent (tanh)" << endl;
    cin >> ans;
    
    int arr[] = {"a", "s", "m", "d", "sin", "cos", "tan", "sinh", "cosh", "tanh"}; //cmd list, just yeet every command name here
    int n = sizeof(arr) / sizeof(*arr);
 
    bool e = find(arr, arr + n, ans) != arr + n;
    
    if (e){
        continue; //python pass moment, it just feels weird with nothing inside
    }else{
        cout << "Command not found. Check if your input includes typo, or any mistakes were made.";
        return 404; //404 not found but idk
    }
    
    int onearg[] = {"sin", "cos", "tan", "sinh", "cosh", "tanh"}
    int a = sizeof(onearg) / sizeof(*onearg);
    
    bool singlchk = find(onearg, onearg + a, ans) != onearg + a; //checks if the math function need 1 or 2 args
    
    if(singlchk){
        cout << "x = ?: ";
        cin >> num1;
    }else{
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
