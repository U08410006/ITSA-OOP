#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    char sex;  
    while(scanf("%c",&sex)!=EOF){  
        if(sex=='E')printf("ByeBye\n");  
        else if(sex=='M')printf("Male\n");  
        else if(sex=='F')printf("Female\n");  
    }  
return 0;  
}  