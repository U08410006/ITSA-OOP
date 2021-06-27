#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int grade;  
    while(scanf("%d",&grade)!=EOF){  
        if(grade>=90&&grade<=100)printf("A\n");  
        else if(grade>=80&&grade<=89)printf("B\n");  
        else if(grade>=70&&grade<=79)printf("C\n");  
        else if(grade>=60&&grade<=69)printf("D\n");  
        else if(grade<60&&grade>=0)printf("E\n");  
        else printf("error\n");  
    }  
return 0;  
}  