#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s;
    cin>>a;
    for(int i=0; i<a.length();i++)
    {
        if(a[i]!='a' && a[i]!='A' &&a[i]!='e' &&a[i]!='E' &&a[i]!='i' &&a[i]!='I' &&a[i]!='o' &&a[i]!='O' &&a[i]!='u' &&a[i]!='U' &&a[i]!='y' &&a[i]!='Y'){
            s=s+'.';
            s=s+ (char) tolower(a[i]);
        }
    }
    
    cout<<s;
}