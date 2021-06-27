#include<stdio.h>  
#include<stdlib.h>  
  
  
int main(){  
    int i , j = 0 , input , num , a[1000] = {0};  
      
    scanf("%d",&input);  
    for(i = 1 ; i < input ; i++){  
        if(input%i == 0){  
            a[j] = i;  
            j++;  
        }  
    }  
    j -= 1;  
/*  for(i = j ; i > 0 ; i--){ 
        printf("%d\n",a[i]); 
    } 
*/  
    printf("%d\n",j/2);   
      
return 0;  
}  