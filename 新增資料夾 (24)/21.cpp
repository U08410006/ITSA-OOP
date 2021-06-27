#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int classes=0,maxclass=0,amount=0,ppl[60][60],i,j,boy[60]={0};  
    cin >> classes >> amount;  
    for(i=0;i<classes;i++){  
        for(j=0;j<amount;j++){  
            cin >> ppl[i][j];  
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
    cout << "Class" << j+1 << "has" << maxclass << " boys.\n";  
return 0;  
}  