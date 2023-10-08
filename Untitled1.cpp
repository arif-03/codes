#include<iostream>
using namespace std;
int main()
{
    int count=0,sec=1,n,fib,first=0;
    cout<<" enter range of fibonacci :";
    cin>>n;
    while(count<n)
    {
        if(count=1)
        {
            fib=count;
        }
        else{
            fib=first+sec;
            first=sec;
            sec=fib;
         cout<<fib<<" ";
            count++;

        }
    }
    return 0;
}
