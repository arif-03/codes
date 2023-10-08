#include<iostream>
using namespace std;

int main()
{
    float a,s,d;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>s>>d;
       printf(".1f",s/d);
    }
}
