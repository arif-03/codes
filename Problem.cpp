#include <bits/stdc++.h>
using namespace std;
bool equal(int N, int M) {
    if (N > M) {
        swap(N, M);
    }
    if ((M - N) % 2 == 0) {
        return 1;
    }

    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        
        int N, M;
        cin >> N >> M; 
        if (equal(N, M)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }

    }
    return 0;
}
 