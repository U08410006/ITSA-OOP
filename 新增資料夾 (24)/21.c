#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int classes=0,maxclass=0,amount=0,ppl[60][60],i,j,boy[60]={0};  
    scanf("%d%d",&classes,&amount);  
    for(i=0;i<classes;i++){  
        for(j=0;j<amount;j++){  
            scanf("%d",&ppl[i][j]);  
        }  
    }  
    for(i=0;i<classes;i++){  
        for(j=0;j<amount;j++){  
            if(ppl[i][j]==1)  
                boy[i]++;  
        }  
    }  
    for(i=0;i<classes;i++){  
        if(boy[i]>maxclass){  
            maxclass=boy[i];  
            j=i;  
        }  
    }  
    printf("Class %d has %d boys.\n",j+1,maxclass);  
return 0;  
}  