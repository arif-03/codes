#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int t,n,m=0,p;
    cin>>t>>p;
    while (t){
        cin>>n;
        if(n>p){
            m=m+2;
        }
        else
        m=m+1;



        t--;
    }
    cout<<m;
}