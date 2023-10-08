#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double faren,cels;
    cout<<"enter farenhite"<<endl;
    cin>>faren;
    cels=(faren-32)/1.8;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<cels;
}
