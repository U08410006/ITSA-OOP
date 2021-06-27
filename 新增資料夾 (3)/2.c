int main(){  
    int a[100],i,sum=0;  
    for(i=0;i<6;i++)  
        scanf("%d",&a[i]);  
    for(i=0;i<6;i++)  
        sum=sum+(a[i]*a[i]*a[i]);  
    printf("%d\n",sum);  
  
return 0;  
}  