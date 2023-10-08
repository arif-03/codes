#include<iostream>
using namespace std;

int main()
{
    int sum=0,number,remainder,revnumber=0;
    cin>>number;
    while(number>0){
            remainder=number%10;
        sum+=number%10;
        number=number/10;
        revnumber=(revnumber*10)+remainder;
    cout<<remainder;
    }
    cout<<endl<<"sum is :"<<sum<<endl<<"reverse number is:"<<revnumber;
    return 0;
}
