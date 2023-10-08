#include <bits/stdc++.h>
using namespace std;
 
int  main(){
    
    int a=0,d=0,n;
    string s;
    cin>>n>>s;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(s[i]=='A')
        a++;
        else d++;

    }
    if(a>d)
    cout<<"Anton";
    else if (a==d) cout<<"Friendship";
    else cout<<"Danik";
    return 0;
}