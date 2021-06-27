#include <iostream> 
using namespace std;
#include<stdio.h>  
  
int main(){  
    int array[3] = {0, 0, 0};  
    int flag = 0;  
    while(cin >> array[0]){  
        for(int i = 1; i < 3; i++){  
            cin >> array[i];  
        }  
        for(int i = 1; i < 3; i++){  
            for(int j = i; j < 3; j++){  
                if((array[i-1] + array[j]) <= array[3 - i - j + 1])  
                    flag = 1;  
            }  
        }  
        if(flag)  
            cout << "unfit" << "\n" ;
        else  
            cout << "fit" << "\n" ;  
        for(int i = 0; i < 3; i++)  
        array[i] = 0;  
        flag = 0;  
    }  
      
    return 0;  
}  