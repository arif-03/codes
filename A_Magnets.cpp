#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int n, c=1;
    cin>>n;
    int v[n];
    for(int i=0; i<n;i++)
    {
        cin>>v[i];
    }
    for (int  j = 0; j < n-1; j++)
    {
        if(v[j]!=v[j+1]){
            c++;
        }
        /* code */
    }
    cout<<c;
    
}