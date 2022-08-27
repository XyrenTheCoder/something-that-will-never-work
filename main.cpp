#include <iostream>
#include <algorithm>
#include <complex>
#include <cmath>

using namespace std;

int main(){
    complex<double> x, y, o; //define complex
    double a, b; //define real
    string ans;
    
    cout << "Available commands (enter function which marked inside parentheses):\nBasic operations:\nadd (a), subtract (s), multiply (m), divide (d), absolute (abs), square root (sqrt)\nLogarithms:\ncommon base10 logarithm (log10), natural logarithm (ln)\nTrigonometry:\nsine (sin), cosine (cos), tangent (tan)\nInverse:\nsine (arcsin), cosine (arccos), tangent (arctan)\nHyperbolic:\nsine (sinh), cosine (cosh), tangent (tanh)\nInverse hyperbolic:\nsine (arcsinh), cosine (arccosh), tangent (arctanh)" << endl;
    cin >> ans;
    
    string arr[] = {"a", "s", "m", "d", "abs", "sqrt", "log10", "ln", "sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh", "arcsinh", "arccosh", "arctanh"}; //cmd list, just yeet every command name here
    int n = sizeof(arr) / sizeof(*arr);
 
    bool e = find(arr, arr + n, ans) != arr + n;
    
    if (e){
        //python pass moment, it just feels weird with nothing inside
    }else{
        cout << "Command not found. Check if your input includes typo, or any mistakes were made.";
        return 404; //404 not found but idk
    }
    
    string onearg[] = {"abs", "sqrt", "log10", "ln", "sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh", "arcsinh", "arccosh", "arctanh"};
    int d = sizeof(onearg) / sizeof(*onearg);
    
    bool singlchk = find(onearg, onearg + d, ans) != onearg + d; //checks if the math function need 1 or 2 args
    
    if(singlchk){
        cout << "x = ? (in form of a + bi, enter value as \"a, b\"): ";
        cin >> x;
    }else{
        cout << "x = ? (in form of real numbers, enter value as \"x\"): ";
        cin >> a;
        cout << "y = ? (in form of real numbers, enter value as \"y\"): ";
        cin >> b;
    }
        
    if(ans == "a"){ //basic
        cout << a + b;
    }else if(ans == "s"){
        cout << a - b;
    }else if(ans == "m"){
        cout << a * b;
    }else if(ans == "d"){
        if (a == 0.0 && b == 0.0){
            cout << "0/0 is indeterminate form";
            return -1;
        }else{
            cout << a / b;
        }
        
    }else if(ans == "abs"){ //absolute value
        cout << real(abs(x)) << to_string((imag(abs(x)) > 0) ? ("+%d", imag(abs(x))) : imag(abs(x))) << "i";
    }else if(ans == "sqrt"){ //square root
        cout << real(sqrt(x)) << to_string((imag(sqrt(x)) > 0) ? ("+%d", imag(sqrt(x))) : imag(sqrt(x))) << "i";
        
    }else if(ans == "log10"){ //common log base 10
        if (imag(log10(x)) > 0) cout << real(log10(x)) << imag(log10(x)) << "i";
        else cout << real(log10(x)) << "+" << imag(log10(x)) << "i";
    }else if(ans == "ln"){ //natural log 
        if (imag(log(x)) > 0) cout << real(log(x)) << imag(log(x)) << "i";
        else cout << real(log(x)) << "+" << imag(log(x)) << "i";
        
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
        
    }else if(ans == "arcsinh"){ //inverse hyp
        if (imag(asinh(x)) > 0) cout << real(asinh(x)) << imag(asinh(x)) << "i";
        else cout << real(asinh(x)) << "+" << imag(asinh(x)) << "i";
    }else if(ans == "arccosh"){
        if (imag(acosh(x)) > 0) cout << real(acosh(x)) << imag(acosh(x)) << "i";
        else cout << real(acosh(x)) << "+" << imag(acosh(x)) << "i";
    }else if(ans == "arctanh"){
        if (imag(atanh(x)) > 0) cout << real(atanh(x)) << imag(atanh(x)) << "i";
        else cout << real(atanh(x)) << "+" << imag(atanh(x)) << "i";
    }                          
    return 0;
}
