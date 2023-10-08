#include<stdio.h>
int fact(int d, int f)
{
    if(f==0)
    return d;
    else
    return fact(f,d%f);
}


int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int d= fact(n,m);
    printf("gcd is %d ",d);

    return 0;

}