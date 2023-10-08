#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int TT,t;
    int i,j;
    string s;
    cin>>TT>>t;
    cin>>s;
    
        for(j=0;j<t;j++) {
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }}
    
    cout<<s;
        
    return 0;
}