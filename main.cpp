#include <iostream>
#include <algorithm>
#include <complex>
#include <cmath>

using namespace std;

int main(){
    complex<double> z; //define complex
    double a, b; //define real (2 vars)
    double x; //define real (1 var)
    string ans;
    
    cout << "Available commands (enter function which marked inside parentheses):\nBasic operations:\nadd (a), subtract (s), multiply (m), divide (d), absolute (abs), square root (sqrt)\nLogarithms:\ncommon base10 logarithm (log10), natural logarithm (ln)\nTrigonometry:\nsine (sin), cosine (cos), tangent (tan), cotangent (cot), secant (sec), cosecant (csc)\nInverse:\nsine (arcsin), cosine (arccos), tangent (arctan), cotangent (arccot), secant (arcsec), cosecant (arccsc)\nHyperbolic:\nsine (sinh), cosine (cosh), tangent (tanh), cotangent (coth), secant (sech), cosecant (csch)\nInverse hyperbolic:\nsine (arcsinh), cosine (arccosh), tangent (arctanh), cotangent (arccoth), secant (arcsech), cosecant (arccsch)" << endl;
    cin >> ans;
    
    string arr[] = {"a", "s", "m", "d", "abs", "sqrt", "log10", "ln", "sin", "cos", "tan", "cot", "sec", "csc", "arcsin", "arccos", "arctan", "arccot", "arcsec", "arccsc", "sinh", "cosh", "tanh", "coth", "sech", "csch", "arcsinh", "arccosh", "arctanh", "arccoth", "arcsech", "arccsch"}; //cmd list, just yeet every command name here
    int n = sizeof(arr) / sizeof(*arr);
 
    bool e = find(arr, arr + n, ans) != arr + n;
    
    if (e){
        //python pass moment, it just feels weird with nothing inside
    }else{
        cout << "Command not found. Check if your input includes typo, or any mistakes were made.";
        return 404; //404 not found but idk
    }
    
    string onearg[] = {"abs", "sqrt", "log10", "ln", "sin", "cos", "tan", "arcsin", "arccos", "arctan", "sinh", "cosh", "tanh", "arcsinh", "arccosh", "arctanh"};
    string realarg[] = {"sec", "csc", "cot"}
    int d = sizeof(onearg) / sizeof(*onearg);
    int f = sizeof(realarg) / sizeof(*realarg);
    
    bool singlchk = find(onearg, onearg + d, ans) != onearg + d; //checks if the math function needs 1 or 2 args
    bool realchk = find(realarg, realarg + f, ans) != realarg + f; //checks if specific function needs 1 real arg
    
    if(singlchk){
        cout << "z = ? (in form of a + bi, enter value as \"a, b\"): ";
        cin >> z;
    }else if(realchk){
        cout << "x = ? (im form of real numbers, enter value as \"x\"): ";
        cin << x;
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
        cout << real(abs(z)) << to_string((imag(abs(z)) > 0) ? ("+%d", imag(abs(z))) : imag(abs(z))) << "i";
    }else if(ans == "sqrt"){ //square root
        cout << real(sqrt(z)) << to_string((imag(sqrt(z)) > 0) ? ("+%d", imag(sqrt(z))) : imag(sqrt(z))) << "i";
        
    }else if(ans == "log10"){ //common log base 10
        if (imag(log10(z)) > 0) cout << real(log10(z)) << imag(log10(z)) << "i";
        else cout << real(log10(z)) << "+" << imag(log10(z)) << "i";
    }else if(ans == "ln"){ //natural log 
        if (imag(log(z)) > 0) cout << real(log(z)) << imag(log(z)) << "i";
        else cout << real(log(z)) << "+" << imag(log(z)) << "i";
        
    }else if(ans == "sin"){ //trigo
        cout << real(sin(z)) << to_string((imag(sin(z)) > 0) ? ("+%d", imag(sin(z))) : imag(sin(z))) << "i";
    }else if(ans == "cos"){
        cout << real(cos(z)) << to_string((imag(cos(z)) > 0) ? ("+%d", imag(cos(z))) : imag(cos(z))) << "i";
    }else if(ans == "tan"){
        cout << real(tan(z)) << to_string((imag(tan(z)) > 0) ? ("+%d", imag(tan(z))) : imag(tan(z))) << "i";
    }else if(ans == "cot"){
        cout << 1.0 / tan(y)
    }else if(ans == "sec"){
        cout << 1.0 / cos(y)
    }else if(ans == "csc"){
        cout << 1.0 / sin(y)
        
    }else if(ans == "arcsin"){ //inverse
        cout << real(asin(z)) << to_string((imag(asin(z)) > 0) ? ("+%d", imag(asin(z))) : imag(asin(z))) << "i";
    }else if(ans == "arccos"){
        cout << real(acos(z)) << to_string((imag(acos(z)) > 0) ? ("+%d", imag(acos(z))) : imag(acos(z))) << "i";
    }else if(ans == "arctan"){
        cout << real(atan(z)) << to_string((imag(atan(z)) > 0) ? ("+%d", imag(atan(z))) : imag(atan(z))) << "i";
    }else if(ans == "arccot"){
        //cout <<
    }else if(ans == "arcsec"){
        //
    }else if(ans == "arccsc"){
        //
        
    }else if(ans == "sinh"){ //hyp
        cout << real(sinh(z)) << to_string((imag(sinh(z)) > 0) ? ("+%d", imag(sinh(z))) : imag(sinh(z))) << "i";
    }else if(ans == "cosh"){
        cout << real(cosh(z)) << to_string((imag(cosh(z)) > 0) ? ("+%d", imag(cosh(z))) : imag(cosh(z))) << "i";
    }else if(ans == "tanh"){
        cout << real(tanh(z)) << to_string((imag(tanh(z)) > 0) ? ("+%d", imag(tanh(z))) : imag(tanh(z))) << "i";
    }else if(ans == "coth"){
    
    }else if(ans == "sech"){
        
    }else if(ans == "csch"){
        
        
    }else if(ans == "arcsinh"){ //inverse hyp
        if (imag(asinh(z)) > 0) cout << real(asinh(z)) << imag(asinh(z)) << "i";
        else cout << real(asinh(z)) << "+" << imag(asinh(z)) << "i";
    }else if(ans == "arccosh"){
        if (imag(acosh(z)) > 0) cout << real(acosh(z)) << imag(acosh(z)) << "i";
        else cout << real(acosh(z)) << "+" << imag(acosh(z)) << "i";
    }else if(ans == "arctanh"){
        if (imag(atanh(z)) > 0) cout << real(atanh(z)) << imag(atanh(z)) << "i";
        else cout << real(atanh(z)) << "+" << imag(atanh(z)) << "i";
    }else if(ans == "arccoth"){
        
        
    }else if(ans == "arcsech"){


    }else if(ans == "arccsch"){
        
        
    }
    return 0;
}
