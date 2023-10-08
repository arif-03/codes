#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    //sort(v.begin(), toupper() ,v.end());

    int toFind;
    cin>>toFind;
    int low=0,hi=n-1;
    int mid;
    while(hi-low>1){
        mid =(hi+low)/2;
        if(v[mid]<toFind){
            low =mid+1;
        }
        else{
            hi=mid;
            }
    }
    if(v[low]==toFind){
        cout<<low;
    }
    else if(v[hi]==toFind){
        cout<<hi<<endl;
    }
    else cout<<"Not found";


}