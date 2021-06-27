#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    int a[50],i,j,amount;  
    char string[20][256];  
    cin >> amount;  
    if(amount>9||amount<1)return 0;  
    for(j=0;j<amount;j++){  
        cin >> string[j];  
        a[j]=strlen(string[j]);  
        if(a[j]>256)return 0;  
    }  
        for(j=0;j<amount;j++){  
            for(i=a[j]-1;i>-1;i--){  
                if(string[j][i]>='a'&&string[j][i]<='z')  
                    string[j][i]-=32;  
                else if(string[j][i]>='A'&&string[j][i]<='Z')  
                    string[j][i]+=32;  
                cout << string[j][i] << "";  
        }  
return 0;  
}  