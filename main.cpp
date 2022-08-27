#include <iostream>
#include <algorithm>
#include <complex>
#include <cmath>

using namespace std;

int main()
{
    complex<double> x, y, o;
    string ans;
    
    cout << "Available commands (input function which marked inside parentheses):\nBasic operations:\nadd (a), subtract (s), multiply (m), divide (d), absolute (abs), square root (sqrt)\nLogarithms:\ncommon base10 logarithm (log10), natural logarithm (ln)\nTrigonometry:\nsine x (sin), cosine x (cos), tangent x (tan)\nInverse:\narc sine (arcsin), arc cosine (arccos), arc tangent (arctan)\nHyperbolic:\nhyperbolic sine x (sinh), hyperbolic cosine x (cosh), hyperbolic tangent x (tanh)" << endl;
    cin >> ans;
    
    string arr[] = {"a", "s", "m", "d", "abs", "sqrt", "log10", "ln", "sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh"}; //cmd list, just yeet every command name here
    int n = sizeof(arr) / sizeof(*arr);
 
    bool e = find(arr, arr + n, ans) != arr + n;
    
    if (e){
        //python pass moment, it just feels weird with nothing inside
    }else{
        cout << "Command not found. Check if your input includes typo, or any mistakes were made.";
        return 404; //404 not found but idk
    }
    
    string onearg[] = {"abs", "sqrt", "log10", "ln", "sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh"};
    int a = sizeof(onearg) / sizeof(*onearg);
    
    bool singlchk = find(onearg, onearg + a, ans) != onearg + a; //checks if the math function need 1 or 2 args
    
    if(singlchk){
        cout << "x = ? (in form of a + bi, enter value as \"a, b\"): ";
        cin >> x;
    }else{
        cout << "x = ? (in form of a + bi, enter value as \"a, b\"): ";
        cin >> x;
        cout << "y = ? (in form of a + bi, enter value as \"a, b\"): ";
        cin >> y;
    }
        
    if(ans == "a"){ //basic
        cout << x + y;
    }else if(ans == "s"){
        cout << x - y;
    }else if(ans == "m"){
        cout << x * y;
    }else if(ans == "d"){
        if (x == 0.0, 0.0 && y == 0.0, 0.0){
            cout << "0/0 is indeterminate form";
            return -1;
        }else{
            cout << x / y;
        }
    }else if(ans == "abs"){ //absolute value
        cout << real(abs(x)) << to_string((imag(abs(x)) > 0) ? ("+%d", imag(abs(x))) : imag(abs(x))) << "i";
    }else if(ans == "sqrt"){ //square root
        cout << real(sqrt(x)) << to_string((imag(sqrt(x)) > 0) ? ("+%d", imag(sqrt(x))) : imag(sqrt)x))) << "i";
        
    }else if(ans == "log10"){ //common log base 10
        cout << real(log10(x)) << to_string((imag(log10(x)) > 0) ? ("+%d", imag(log10(x))) : imag(log10(x))) << "i";
    }else if(ans == "ln"){ //natural log 
        cout << real(log(x)) << to_string((imag(log(x)) > 0) ? ( ("+%d", imag(log(x))) : imag(log(x))) << "i";
        
    }else if(ans == "sin"){ //trigo
        cout << real(sin(x)) << to_string((imag(sin(x)) > 0) ? ("+%d", imag(sin(x))) : imag(sin(x))) << "i";
    }else if(ans == "cos"){
        cout << real(cos(x)) << to_string((imag(cos(x)) > 0) ? ("+%d", imag(cos(x))) : imag(cos(x))) << "i";
    }else if(ans == "tan"){
        cout << real(tan(x)) << to_string((imag(tan(x)) > 0) ? ("+%d", imag(tan(x))) : imag(tan(x))) << "i";
        
    }else if(ans == "arcsin"){ //inverse
        cout << real(asin(x)) << to_string((imag(asin(x)) > 0) ? ("+%d", imag(asin(x))) : imag(asin(x))) << "i";
    }else if(ans == "arccos"){
        cout << real(acos(x)) << to_string((imag(acos(x)) > 0) ? ("+%d", imag(acos(x))) : imag(acos(x))) << "i";
    }else if(ans == "arctan"){
        cout << real(atan(x)) << to_string((imag(atan(x)) > 0) ? ("+%d", imag(atan(x))) : imag(atan(x))) << "i";
        
    }else if(ans == "sinh"){ //hyp
        cout << real(sinh(x)) << to_string((imag(sinh(x)) > 0) ? ("+%d", imag(sinh(x))) : imag(sinh(x))) << "i";
    }else if(ans == "cosh"){
        cout << real(cosh(x)) << to_string((imag(cosh(x)) > 0) ? ("+%d", imag(cosh(x))) : imag(cosh(x))) << "i";
    }else if(ans == "tanh"){
        cout << real(tanh(x)) << to_string((imag(tanh(x)) > 0) ? ("+%d", imag(tanh(x))) : imag(tanh(x))) << "i";
    }
    return 0;
}
