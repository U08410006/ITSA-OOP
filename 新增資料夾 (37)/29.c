#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int total = 0 , data , i = 0 , input = 0 , count;  
      
    scanf("%d",&input);  
      
    for(int j = 1 ; j <= input ; j ++){  
        i+=j;  
    }  
    count = input -1;  
    while(count!=0){  
        scanf("%d",&data);  
        i-=data;  
        count--;  
    }  
    printf("%d\n",i);  
return 0;  
}  