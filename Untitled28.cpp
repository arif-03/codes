#include<iostream>
using namespace std;

int main()
{
    int m,sum=1;
    cin>>m;
    for(int i=m;i>=2;i--)
    {
        sum=sum*i;

    }
    cout<<"factorial "<<"="<<sum<<endl;
    return 0;
}
