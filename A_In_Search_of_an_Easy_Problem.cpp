#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    int n,p=0;
    cin>>n;
    while(n){
        int t;
        cin>>t;
        if(t==1){
           p=1; 
            break;
        }
        n--;
    }
    if(p)
    cout<<"HARD";
    else
    cout<<"EASY";
}