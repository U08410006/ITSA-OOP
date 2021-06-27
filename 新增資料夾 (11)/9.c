#include<stdio.h>  
#include<stdlib.h>  
#include<math.h>  
  
int main(){  
 int num,adj;  
 while(scanf("%d",&num)!=EOF){  
 adj=num%2;  
if(adj==1)  
 printf("odd\n");  
if(adj==0)  
 printf("even\n");  
  
 }  
}  