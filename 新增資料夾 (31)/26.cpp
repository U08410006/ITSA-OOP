#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
int main(){  
    int min=999,max=0,i,amount,shops[20],distance;  
    while(cin >> amount){  
        if(amount<1||amount>20)return 0;  
        for(i=0;i<amount;i++){  
            cin >> shops[i];  
            if(shops[i]>99||shops[i]<0)return 0;  
            if(shops[i]<min)min=shops[i];  
            if(shops[i]>max)max=shops[i];  
        }  
        distance=(max-min)*2;  
        cout << distance << "\n";  
    }  
return 0;  
 }  