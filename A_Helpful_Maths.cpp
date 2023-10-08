#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,len;
    cin>>a;
    len= a.size();
    for(i=0;i<len-1;i++){
        for(j=0;j<len-1;j++){
            if(a[j]!='+'){
                if(a[j]>a[j+2]){
                    char temp=a[j];
                    a[j]=a[j+2];
                    a[j+2]=temp;
                }
            }
        }
    }
    cout<<a;
}