#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<math.h>  
  
int main(){  
    int i,j,amount,student,score[50][50];  
    float percentage[50],average,sum=0;  
    scanf("%d%d",&amount,&student);  
    for(i=0;i<amount;i++){  
        scanf("%f",&percentage[i]);  
    }  
    for(i=0;i<student;i++){  
        for(j=0;j<amount;j++){  
            scanf("%d",&score[i][j]);  
            sum+=(score[i][j]*percentage[j]);  
        }  
    }  
    average=(sum/(student));  
    printf("%.2f\n",average);  
return 0;  
}  