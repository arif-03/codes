#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a;
        for (long long i = 0; i < n; i++) {
            long long k;
            cin >> k;
            a.push_back(n-k+1);

        }
        
        for (long long i = 0; i < n; i++) {
            
            cout<<a[i]<<" ";
        }
        cout<<endl;
      
    }

    return 0;
}
