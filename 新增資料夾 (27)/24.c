#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    int i,len,amount=0;  
    char inputA,inputB;  
    char full[50];  
    scanf("%c%c%s",&inputA,&inputB,&full);  
    if(inputA<'1'||inputA>'9')return 0;  
    if(inputB>'9'||inputB<'0')return 0;  
    len=strlen(full);  
    if(len!=7)return 0;  
    for(i=0;i<len;i++){  
        if(inputA==full[i]&&inputB==full[i+1])amount++;  
    }printf("%d\n",amount);  
return 0;  
}  