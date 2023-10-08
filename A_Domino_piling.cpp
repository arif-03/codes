#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int m,X=0;
    char s[4];
    cin>>m;
    for(int i=0; i<m;i++)
    {
        cin>>s;
        if(s[1]=='+'){
            X++;
        }
        else X--;
    }
    cout<<X;
    return 0;
    
}