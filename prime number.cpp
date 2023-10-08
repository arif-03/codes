#include<iostream>
using namespace std;

int main()
{
    int num,i,check=0;
    cout<<"enter a number:";
    cin>>num;
    for(i=1;i<=num;i++){
 if(num%i==0){
            check++;
 }
}

if(check!=2)
{
    cout<<"not prime";
}
else
    cout<<"prime";
return 0;
}
