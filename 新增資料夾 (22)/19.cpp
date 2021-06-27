#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    int n,i,max=0,a,b,input1=0,input2=0;  
    //if(n==0)return 0;  
    while(cin >> input1 >> input2){  
        if(input1>input2){a=input2;b=input1;}  
        else if(input1<input2){a=input1;b=input2;}  
        for(i=a;i<b+1;i++){  
            int num=1;n=i;  
            while(n!=1){  
                if(n%2!=0){  
                    n=3*n+1;  
                    num++;  
                }  
                else if(n%2==0){  
                    n=n/2;  
                    num++;  
                }  
            }if(max<num)max=num;  
        }cout << input1 << " " << input2 << " " << max << "\n";  
    }  
return 0;  
}  