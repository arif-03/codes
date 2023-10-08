#include<iostream>
using namespace std;

int main()
{
    float a,s,d;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cin>>s>>d;

        if(d==0){
            cout<<"divisao impossivel";
            continue;
        }
       printf("%.1f\n",s/d);
    }
    return 0;
}
