#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<math.h>  
  
int main(){  
    int i,j,amount,student,score[50][50];  
    float percentage[50],average,sum=0;  
    cin >> amount >> student;  
    for(i=0;i<amount;i++){  
        cin >> percentage[i];  
    }  
    for(i=0;i<student;i++){  
        for(j=0;j<amount;j++){  
            cin >> score[i][j];  
            sum+=(score[i][j]*percentage[j]);  
        }  
    }  
    average=(sum/(student));  
    cout << average << "2f\n";  
return 0;  
}  