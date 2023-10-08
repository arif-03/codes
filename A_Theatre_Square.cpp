#include<iostream>
using namespace std;
int main()
{
    long long int m,n,a,k,l;
    cin>>m>>n>>a;
    k=m/a;
    if(m%a != 0){
        k++;
    }
    l= n/a;
    if(n%a !=0)
    {
        l++;
    }
    cout<<l*k;
    return 0;

}
