#include<stdio.h>  
#include<stdlib.h>  
#define swap(x,y,t)((t)=(x),(x)=(y),(y)=(t))  
int a[100] ;  
void print(int i){  
    int j = 0;  
    for(j = 0 ; j < i-1 ; j ++){  
        printf("%d,",a[j]);  
    }printf("%d\n",a[j]);  
};  
  
int main(){  
    int i = 0 , j , lg , t , flag ;  
    char check = 'a';  
    while(scanf("%d",&a[i]) != EOF){  
        i++;  
    }  
    print(i);  
    for(j = 0 ; j < i ; j ++){  
        lg = a[j];  
        flag = j;  
        int check = 0;  
        for(int k = j ; k < i ; k ++){  
            if(lg < a[k]){  
                flag = k ;  
                lg = a[k];  
                check = 1;  
            }  
        }  
        if(check){  
            swap(a[j],a[flag],t);  
            print(i);  
        }  
    }  
return 0;  
}  