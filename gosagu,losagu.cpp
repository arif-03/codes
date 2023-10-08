#include<iostream>
using namespace std;

int main()
{
    int num1,num2,remainder;
    cin>>num1>>num2;
    int n1=num1,n2=num2;
    while(n2!=0)
    {
        remainder=n1/n2;
        n1=n2;
        n2=remainder;
    }
    cout<<"gosagu = "<<n1<<endl;
    cout<<"losagu = "<<(num1*num2)/n1<<endl;
    return 0;
}
