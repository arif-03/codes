#include<bits/stdc++.h>
using namespace std;
int find(vector<int> s, int d, int m){
    int sum[100];
    int count =0;
    int n= s.size();
    sum[0]=0;
    for(int i =0; i<n;i++){
        sum[i+1] = sum[i] + s[i];
    }

    for(int i =0; i<n;i++){
    if(sum[i]-sum[i-m]==d)
    count++;
    }
    return count;
}



int main(){
    int m,d,n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n;i++)
    cin>>v[i];
    cin>>d>>m;
    cout<<find(v,d,m)<<endl;
    return 0;
}