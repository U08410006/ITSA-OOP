#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
  
int main(){  
    int grade;  
    while(cin >> grade){  
        if(grade>=90&&grade<=100)cout << "A\n";  
        else if(grade>=80&&grade<=89)cout << "B\n";  
        else if(grade>=70&&grade<=79)cout << "C\n";  
        else if(grade>=60&&grade<=69)cout << "D\n";  
        else if(grade<60&&grade>=0)cout << "E\n";  
        else cout << "error\n";  
    }  
return 0;  
}  