#include<stdio.h>

int gcd(int a , int b){
    if(b==0){
        return a;
    }
    else
    {
        return gcd(b , a%b);
    }
}

int main (){
    int n,m,result;
    scanf("%d%d",&n,&m);
    result = gcd(n,m);
    printf("gcd is %d",result);
    return 0;
}