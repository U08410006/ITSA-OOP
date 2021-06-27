#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
  
int main(){  
    char s[12][10]={"rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"};  
    int input;  
    cin >> input;  
    cout << s[(input-4)%12] << "\n";  
  
    return 0;  
}  