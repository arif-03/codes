#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
	string a,b;
	cin>>a>>b;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	transform(b.begin(), b.end(), b.begin(), ::toupper);
	if(a==b){
		cout<<0;
	}else if(a>b){
		cout<<1;
	}else{
		cout<<-1;
	}
	
 }
int main(){
	solve();
}
