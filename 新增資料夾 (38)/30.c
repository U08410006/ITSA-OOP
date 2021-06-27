#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int data[600000] = {0} , count = 0 ;  
    long long int in = 0 , i = 0 , input = 0;  
    scanf("%lld",&input);  
    while(i != (input-2)){  
        scanf("%lld",&in);  
        data[in] = 1;  
        i++;  
    }  
    i = 1;  
    while(i != (input)){  
        if(data[i] == 0 && count == 0){  
            printf("%lld ",i);  
            count ++;         
        }  
        else if(data[i] == 0){  
            printf("%lld\n",i);  
        }  
        i++;  
    }  
return 0;  
}  