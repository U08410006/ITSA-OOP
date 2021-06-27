#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int i = 0 , input[100] = {0}, amount = 0;  
    scanf("%d",&amount);  
    while(i!=amount){  
        scanf("%d",&input[i]);  
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
        printf("%d ",input[i]);  
        i++;  
    }printf("%d\n",input[i]);  
      
return 0;  
}  