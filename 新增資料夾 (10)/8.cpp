#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    char sex;  
    while(cin >> sex){  
        if(sex=='E')cout << "ByeBye\n";  
        else if(sex=='M')cout << "Male\n";  
        else if(sex=='F')cout << "Female\n";  
    }  
return 0;  
}  