#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string a,s="hello";
   int i,j=0,f=0;

cin>>a;
for(i=0;i<5;i++)

{
    while(a[j]!='\0'){
        if(a[j]==s[i]){
            f++;
            j++;
            break;
        }
        else j++;
    }
}
if(f==5)cout<<"YES";else cout<<"NO";
}