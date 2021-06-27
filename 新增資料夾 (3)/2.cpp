#include <iostream> 
using namespace std;
int main(){  
    int a[100],i,sum=0;  
    for(i=0;i<6;i++)  
        cin >> a[i];  
    for(i=0;i<6;i++)  
        sum=sum+(a[i]*a[i]*a[i]);  
    cout << sum << "\n";  
  
return 0;  
}  