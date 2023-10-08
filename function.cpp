#include<iostream>
using namespace std;

void fun(int num[],int size)
    {
        for(int i=1;i<=5;i++)
            cout<<num[i]<<" ";
    }

int main()
{
    int num[5]= {2,3,4,5,6};
    fun(num,5);
}
