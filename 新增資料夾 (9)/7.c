#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int main(){  
    int judge[26]={0},j,i;  
    char length,string[100],letterBig[26]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},letterSmall[26]={"abcdefghijklmnopqrstuvwxyz"};  
    scanf("%s",&string);  
    length=strlen(string);  
    for(i=0;i<length;i++)  
    {  
        for(j=0;j<26;j++)  
        {  
            if(string[i]==letterSmall[j])  
            {  
                judge[j]++;  
            }  
            if(string[i]==letterBig[j])  
            {  
                judge[j]++;  
            }  
        }  
    }  
    for(i=0;i<26;i++)  
    {  
        while(judge[i]!=0)  
        {  
            printf("%c %d\n",letterSmall[i],judge[i]);  
            break;  
        }  
    }  
return 0;  
}  