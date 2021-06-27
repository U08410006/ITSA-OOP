#include <iostream> 
#include <iomanip>
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    float top , btm , height ;  
    cin >> top >> btm >> height;  
    cout.setf(ios::fixed);
    cout << "Trapezoid area:" << fixed <<  setprecision(1) << ((top+btm)*height)/2;  
return 0;  
}  