#include <iostream> 
using namespace std;
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
  
    int i,hundred=0,left=0, right=0,amount, n;  
    cin >> amount;  
    for(i=0;i<amount;i++){  
        cin >> n;  
        if(n==49)  
            cout << "IL";  
        else if(n == 100)  
            cout << "C";  
        else if (n==1000)  
            cout << "M";  
        else  
        {  
            hundred = n / 100;  
            left = ( ( n / 10 ) % 10 );  
            right = n % 10;  
        }  
        switch(hundred)  
        {  
            case 1:  
            cout << "C";  
            break;  
            case 2:  
            cout << "CC";  
            break;  
            case 3:  
            cout << "CCC";  
            break;  
            case 4:  
            cout << "CD";  
            break;  
            case 5:  
            cout << "D";  
            break;  
            case 6:  
            cout << "DC";  
            break;  
            case 7:  
            cout << "DCC";  
            break;  
            case 8:  
            cout << "DCCC";  
            break;  
            case 9:  
            cout << "CM";  
            break;  
        }  
        switch(left)  
        {  
            case 1:  
            cout << "X";  
            break;  
            case 2:  
            cout << "XX";  
            break;  
            case 3:  
            cout << "XXX";  
            break;  
            case 4:  
            cout << "XL";  
            break;  
            case 5:  
            cout << "L";  
            break;  
            case 6:  
            cout << "LX";  
            break;  
            case 7:  
            cout << "LXX";  
            break;  
            case 8:  
            cout << "LXXX";  
            break;  
            case 9:  
            cout << "XC";  
            break;  
        }  
  
        switch(right)  
        {  
            case 1:  
            cout << "I";  
            break;  
            case 2:  
            cout << "II";  
            break;  
            case 3:  
            cout << "III";  
            break;  
            case 4:  
            cout << "IV";  
            break;  
            case 5:  
            cout << "V";  
            break;  
            case 6:  
            cout << "VI";  
            break;  
            case 7:  
            cout << "VII";  
            break;  
            case 8:  
            cout << "VIII";  
            break;  
            case 9:  
            cout << "IX";  
            break;  
        }cout << "\n";  
    }  
return 0;  
}  