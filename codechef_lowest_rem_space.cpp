#include<bits/stdc++.h>
#define int long long int
using namespace std;
int ans=INT_MAX;
void syl(int ht[],int n, int i, int current, int h){
    if(current>h)return ;
    if(i==n){
        ans = min(ans,h-current);
        return;
    }
    syl(ht,n,i+1,current+ht[i],h);
    syl(ht,n,i+1,current,h);
}

int32_t main(){
    int n,h,i;
    cin>>n>>h;
    int ht[n];
    for(i=0;i<n;i++)
    cin>>ht[i];
    syl(ht,n,0,0,h);
    cout<<ans;
}