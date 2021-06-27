#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int i , k , f , j = 0 , total = 0 , cur = 0 , lines = 0;  
    int input[100] , times = 0;  
    cin >> lines;  
    for(i = 0 ; i < lines ; i++){  
        cin >> times;  
        for(k = 0 ; k < times ; k++){  
            cin >> input[k];  
        }  
        for(k = 0 ; k < times ; k++){  
            for(f = 0 ; f < times-1 ; f++){  
                if(input[f] > input[f+1]){  
  
                    int temp = input[f];  
                    input[f] = input[f+1];  
                    input[f+1] = temp;  
                }  
                  
            }  
              
        }  
        for(k = 0 ; k < times-1 ; k++){  
      
            cur += input[k];  
  
            total += cur;  
  
        }  
        cout << total << "\n";  
        total = 0;  
        cur = 0;  
    }  
      
return 0;  
}  