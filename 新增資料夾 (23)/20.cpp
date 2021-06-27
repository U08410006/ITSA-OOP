#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    char input[50];  
    while(cin >> input){  
        int i,judge=0;  
        int len=strlen(input);  
        if(len==1){  
            if(input[0]>48&&input[0]<57)cout << "int\n";  
            else cout << "char\n";  
        }  
        else{  
            for(i=0;i<len;i++){  
                if(input[i]==45&&i==0)judge+=2;  
                else if(input[i]>=48&&input[i]<=57)judge+=0;
                else if(input[0]==45&&input[1]==46)judge+=6; 
                else if(input[i]==46&&i!=0&&i!=len-1)judge+=3;
                else judge+=6;  
            }  
            if(judge==0||judge==2)cout << "int\n";  
            else if(judge==3||judge==5)cout << "float\n";  
            else cout << "string\n";  
        }  
    }  
return 0;  
}  