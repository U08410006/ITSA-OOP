#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    float top , btm , height ;  
    scanf("%f%f%f",&top,&btm,&height);  
    printf("Trapezoid area:%.1f\n",((top+btm)*height)/2);  
return 0;  
}  