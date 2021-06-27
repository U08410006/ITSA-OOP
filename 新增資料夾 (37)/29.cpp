#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int total = 0 , data , i = 0 , input = 0 , count;  
      
    cin >> input;  
      
    for(int j = 1 ; j <= input ; j ++){  
        i+=j;  
    }  
    count = input -1;  
    while(count!=0){  
        cin >> data;  
        i-=data;  
        count--;  
    }  
    cout << i << "\n";  
return 0;  
}  