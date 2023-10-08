#include <bits/stdc++.h>
using namespace std;
bool valid(int total){
    string bill = to_string(total);
    if(bill.size()==5 && bill[0] != '0')
    return 1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int total = n*p;
        if(valid(total)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        

    }
    return 0;
}
 