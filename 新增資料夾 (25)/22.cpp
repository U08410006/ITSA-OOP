#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    char input[100];  
    while(cin >> input){  
        int len = 0 , j = 0 , i = 0 , tf = 1;  
        len = strlen(input);  
        for(j = len-1 ; j >= 0 ; j--){  
            if(input[i] != input[j]) tf = 0;  
            i++;  
        }  
        if(tf==1)cout << "yes\n";  
        else cout << "no\n";  
    }  
return 0;  
}  