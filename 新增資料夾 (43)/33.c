#include<stdio.h>  
  
int main(){  
    int total = 0;  
    scanf("%d",&total);  
    while(total > 0){  
        int input[2][20];  
        int num = 0;  
        while(num < 2 || num > 20){  
            scanf("%d",&num);  
        }  
        for(int i = 0; i < num; i++){  
            scanf("%d%d",&input[0][i],&input[1][i]);  
        }  
        int x2 = (input[0][0]-input[0][1])*(input[0][0]-input[0][1]);  
        int y2 = (input[1][0]-input[1][1])*(input[1][0]-input[1][1]);  
        int dis = x2 + y2;  
        for(int i = 0; i < num; i++){  
            for(int j = i + 1; j < num; j++){  
                x2 = (input[0][i]-input[0][j])*(input[0][i]-input[0][j]);  
                y2 = (input[1][i]-input[1][j])*(input[1][i]-input[1][j]);  
                if(dis < x2 + y2){  
                    dis = x2 + y2;  
                }  
            }  
        }  
        printf("%d\n",dis);  
        total --;  
    }   
    return 0;  
}  