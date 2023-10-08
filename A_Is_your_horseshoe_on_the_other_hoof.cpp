#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(4);
    int b=0,c=0;
    for(int i=0;i<=3;i++){
    cin>>v[i];
    }
    while(b<=2){
    for(int i=0;i<3;i++){
        if(v[b]==v[i]){
            c++;
        }
    }
    b++;
    }
    cout<<c<<endl;
}