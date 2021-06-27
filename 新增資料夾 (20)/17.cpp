#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include <iomanip>
int main(){  
    int heigth,sex;  
    float weigth;  
    while(cin >> heigth >> sex){  
        cout.setf(ios::fixed);
        if(sex==1){  
            weigth=(heigth-80)*0.7;  
            cout << fixed << setprecision(1)<< weigth << "\n";  
        }  
        else if(sex==2){  
            weigth=(heigth-70)*0.6;  
            cout << fixed << setprecision(1) << weigth << "\n";  
        }  
    }  
return 0;  
}  