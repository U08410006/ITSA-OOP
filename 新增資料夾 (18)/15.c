#include <stdio.h>
int main(){
    int in;
    while(scanf("%d",&in)!=EOF){
        if(in == 12 || in == 1 || in ==2){
            printf("Winter\n");
        }
        else if(in<=5){
            printf("Spring\n");
        }
        else if(in<=8){
            printf("Summer\n");
        }
        else{
            printf("Autumn\n");
        }
    }
}