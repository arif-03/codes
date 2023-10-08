

#include <bits/stdc++.h>
 
using namespace std;
 
int NonDivisible(int N, int K)
{
    int find = 0;
    int j = 0;
 
     int N;
    int K;
    cin>>N>>K;
    while (find != K) {
        j++;
        if (j % N != 0)
            find++;
    }
    return j;
}
 
// Driver Code
int main()
{
    int N;
    int K;
    cout << NonDivisible(N, K);
    return 0;
}