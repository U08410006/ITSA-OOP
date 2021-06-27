#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int i = 0 , input[100] = {0}, amount = 0;  
    cin >> amount;  
    while(i!=amount){  
        cin >> input[i];  
        i++;  
    }  
    for(int j = 0 ; j < amount ; j++){  
        for(i = 0 ; i < amount-1 ; i++){  
            if(input[i]>input[i+1]){  
                int temp = input[i];  
                input[i] = input[i+1];  
                input[i+1] = temp;  
            }  
        }  
    }  
    i = 0;  
    while(i!=amount-1){  
        cout << input[i] << " ";  
        i++;  
    }cout << input[i] << "\n";  
      
return 0;  
}  