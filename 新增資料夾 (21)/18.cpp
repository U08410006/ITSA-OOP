#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
int main(){  
    int score,assist,rebound,rob,misstake,total;  
    cin >> score >> rebound >> assist >> rob >> misstake;  
    if(score<0||assist<0||rebound<0||rob<0||misstake<0)return 0;  
    total=(score+assist*2+rebound*2+rob*2)-misstake*2;  
    if(total>=45)cout << "A\n";  
    else if(total<45&&total>=35)cout << "B\n";  
    else if(total<35&&total>=25)cout << "C\n";  
    else if(total<25)cout << "D\n";  
return 0;  
}  