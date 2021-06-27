#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int a,b,c,d;  
    cin >> a >> b >> c;  
    if(a==b||b==c||c==a)return 0;  
    while(a<b||b<c){  
        if(a<b){  
            d=a;a=b;b=d;  
        }if(b<c){  
            d=b;b=c;c=d;  
        }if(a<c){  
            d=a;a=c;c=d;  
        }  
    }  
    cout << a << ">" << b << ">" << c << "\n";  
return 0;  
}  