#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,update =0;
    cin>>n;
    while(n){
        if(update==0){
            cout<<"I hate ";
            update = 1;
        }
        else {cout<<"I love ";
        update = 0;
        }
        if(n>1)
        cout<<"that ";
        else cout<<"it";

        n--;

    }
    return 0;
}
