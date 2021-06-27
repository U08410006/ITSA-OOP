#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    int i,len,amount=0;  
    char inputA,inputB;  
    char full[50];  
    cin >> inputA >> inputB >> full;  
    if(inputA<'1'||inputA>'9')return 0;  
    if(inputB>'9'||inputB<'0')return 0;  
    len=strlen(full);  
    if(len!=7)return 0;  
    for(i=0;i<len;i++){  
        if(inputA==full[i]&&inputB==full[i+1])amount++;  
    }cout << amount << "\n";  
return 0;  
}  