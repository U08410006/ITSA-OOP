#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    int heigth,sex;  
    float weigth;  
    while(scanf("%d%d",&heigth,&sex)!=EOF){  
        if(sex==1){  
            weigth=(heigth-80)*0.7;  
            printf("%.1f\n",weigth);  
        }  
        else if(sex==2){  
            weigth=(heigth-70)*0.6;  
            printf("%.1f\n",weigth);  
        }  
    }  
return 0;  
}  