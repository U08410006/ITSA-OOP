#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    int score,assist,rebound,rob,misstake,total;  
    scanf("%d%d%d%d%d",&score,&rebound,&assist,&rob,&misstake);  
    if(score<0||assist<0||rebound<0||rob<0||misstake<0)return 0;  
    total=(score+assist*2+rebound*2+rob*2)-misstake*2;  
    if(total>=45)printf("A\n");  
    else if(total<45&&total>=35)printf("B\n");  
    else if(total<35&&total>=25)printf("C\n");  
    else if(total<25)printf("D\n");  
return 0;  
}  