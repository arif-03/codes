#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97){
            l++;
        }
        else u++;
    }
    if(u>l){
        for(int i=0;i<s.length();i++)
        {
           s[i]= (char)toupper(s[i]);
        }
       
    }
    else for(int i=0;i<s.length();i++)
        {
           s[i]= (char)tolower(s[i]);
        }
        cout<<s;
}