#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
  
int main(){  
    int i , j = 0 , input , num , a[1000] = {0};  
      
    cin >> input;  
    for(i = 1 ; i < input ; i++){  
        if(input%i == 0){  
            a[j] = i;  
            j++;  
        }  
    }  
    j -= 1;  
/*  for(i = j ; i > 0 ; i--){ 
        cout << a[i] << "\n"; 
    } 
*/  
    cout << j/2 << "\n";   
      
return 0;  
}  