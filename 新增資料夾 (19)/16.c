#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int a,b,c,d;  
    scanf("%d%d%d",&a,&b,&c);  
    if(a==b||b==c||c==a)return 0;  
    while(a<b||b<c){  
        if(a<b){  
            d=a;a=b;b=d;  
        }if(b<c){  
            d=b;b=c;c=d;  
        }if(a<c){  
            d=a;a=c;c=d;  
        }  
    }  
    printf("%d>%d>%d\n",a,b,c);  
return 0;  
}  