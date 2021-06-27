#include<stdio.h>  
#include<stdlib.h>  
int main(){  
    int min=999,max=0,i,amount,shops[20],distance;  
    while(scanf("%d",&amount)!=EOF){  
        if(amount<1||amount>20)return 0;  
        for(i=0;i<amount;i++){  
            scanf("%d",&shops[i]);  
            if(shops[i]>99||shops[i]<0)return 0;  
            if(shops[i]<min)min=shops[i];  
            if(shops[i]>max)max=shops[i];  
        }  
        distance=(max-min)*2;  
        printf("%d\n",distance);  
    }  
return 0;  
 }  