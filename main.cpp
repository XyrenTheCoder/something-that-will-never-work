// hi i am torturing myself with cpp
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    string ans;
    
    cout << "Available commands:\nBasic operations:\nadd (a), subtract (s), multiply (m), divide (d)\nTrigonometry:\nsine x (sin), cosine x (cos), tangent x (tan)\nInverse: arc sine (arcsin), arc cosine (arccos), arc tangent (arctan)\nHyperbolic:\nhyperbolic sine x (sinh), hyperbolic cosine x (cosh), hyperbolic tangent x (tanh)" << endl;
    cin >> ans;
    
    string arr[] = {"a", "s", "m", "d", "sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh"}; //cmd list, just yeet every command name here
    int n = sizeof(arr) / sizeof(*arr);
 
    bool e = find(arr, arr + n, ans) != arr + n;
    
    if (e){
        //python pass moment, it just feels weird with nothing inside
    }else{
        cout << "Command not found. Check if your input includes typo, or any mistakes were made.";
        return 404; //404 not found but idk
    }
    
    string onearg[] = {"sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh"};
    int a = sizeof(onearg) / sizeof(*onearg);
    
    bool singlchk = find(onearg, onearg + a, ans) != onearg + a; //checks if the math function need 1 or 2 args
    
    if(singlchk){
        cout << "x = ?: ";
        cin >> x;
    }else{
        cout << "x = ?: ";
        cin >> x;
        cout << "y = ?: ";
        cin >> y;
    }
        
    if(ans == "a"){ //basic
        cout << x + y;
    }else if(ans == "s"){
        cout << x - y;
    }else if(ans == "m"){
        cout << x * y;
    }else if(ans == "d"){
        if (x == 0 && y == 0){
            cout << "0/0 is indeterminate form";
            return -1;
        }else{
            cout << x / y;
    }else if(ans == "sin"){ //trigo
        cout << sin(x);
    }else if(ans == "cos"){
        cout << cos(x);
    }else if(ans == "tan"){
        cout << tan(x);
    }else if(ans == "arcsin"){ //inverse
        cout << asin(x);
    }else if(ans == "arccos"){
        cout << acos(x);
    }else if(ans == "arctan"){
        cout << atan(x);
    }else if(ans == "sinh"){ //hyp
        cout << sinh(x);
    }else if(ans == "cosh"){
        cout << cosh(x);
    }else if(ans == "tanh"){
        cout << tanh(x);
    }
    return 0;
}
