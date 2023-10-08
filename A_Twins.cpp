#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=0,count=0,sum1=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
         total += a[i];
    }
    sort(a,a+n);
    int half = total/2;
    for(int i=n-1; i>=0; i--){
        sum1 += a[i];
        count++;
        if(sum1>half){
            break;
        }
    }
    cout<<count;
}