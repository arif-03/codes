{#include <bits/stdc++.h>
using namespace std;
int main()
    int t;
    cin>>t;
    while(t){
        int count =0;
    string a = "codeforces";
    string b;
        cin>>b;
        for(int i=0;i<b.size();i++){
            if(a[i]!=b[i]){
                count++;
            }
        }
        cout<<count<<endl;

        t--;
    }
    
}