#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int TT;
    int i,j;
    string s;
    cin>>s;
    cin>>TT;
    for(int T=1;T<=TT;T++)
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='G' && s[i+1]=='B'){
                s[i]='B';
                s[i+1]='G';
                i++;
            }
        }
    }
    cout<<s;
        
    return 0;
}