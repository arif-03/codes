#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,i,n;
    cin>>n;
    string s;
    cin>>s;
    for(i=1;i<n;i++){
        if(s[i]==s[i-1])
        a++;

    }
    cout<<a;

}