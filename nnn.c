#include<stdio.h>
int facto(int n)
{
    if(n==1 || n==0)
    return 1;
    else
    return n*facto(n-1);
}

int main(){
    int a;
    scanf("%d",&a);
    int fact = facto(a);
    printf("factorial of %d is %d",a,fact);

    
}