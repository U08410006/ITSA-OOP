#include <iostream> 
using namespace std;
#include <stdio.h>
int main(){
    int in;
    while(cin >> in){
        if(in == 12 || in == 1 || in ==2){
            cout << "Winter\n";
        }
        else if(in<=5){
            cout << "Spring\n";
        }
        else if(in<=8){
            cout << "Summer\n";
        }
        else{
            cout << "Autumn\n";
        }
    }
}