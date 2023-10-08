#include<iostream>
using namespace std;
void display(int *k)
{
    *k=20;
}


int main()
{
    int a=10;
    cout<<"before calling x = "<<a<<endl;

    display(&a);
    //& dile oi adress er value change hoye jabe
    //& na dile sudhu copy pass hbe value na
    //& dile variable er agey akta * dite hbe
    cout<<"after calling x = "<<a<<endl;
}
