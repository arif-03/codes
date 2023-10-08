#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<char> vchar;
typedef vector<string> vstr;
#define endl '\n'
#define Ariful ios_base::sync_with_stdio(false);
#define Islam cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
#define forz(i,b) for(ll i=0;i<b;i++)
#define foro(i,b) for(ll i=1;i<=b;i++)
#define forr(i,b) for(ll i=b-1;i>=0;i--)
#define forro(i,b) for(ll i=b;i>=1;i--)
#define asc(v) sort(v.begin(), v.end())
#define dsc(v) sort(v.begin(), v.end(), greater<int>())
#define rev(v) reverse(v.begin(), v.end())
const ll mod = 998244353;
//const ll nprime = 10000000;
//vector<bool> prime(nprime,true);
 string upper(string s){
        for(int i=0;i<s.length();i++)
        {
           s[i]= (char)toupper(s[i]);
        }
          return s;
       
    }
     string lower(string s){
for(int i=0;i<s.length();i++)
        {
           s[i]= (char)tolower(s[i]);
        }
          return s;
}
void Y(){cout<<"YES"<<endl;}
void N(){cout<<"NO"<<endl;}
void M(){cout<<-1<<endl;}

void vecin(vll &v){for(auto &i:v)cin>>i;}
void vecout(vll &v){for(auto &i:v)cout<<i<<" ";}
ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}
ll lcm(ll a, ll b){return a/gcd(a,b)*b;}
bool isprime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(ll i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

 
void solution()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool p = false;
    
    string a=s; rev(s);
    if(a==s)
    p =true;
    if(k==0)
    cout<<"1"<<endl;
    else if(p)
    cout<<"1"<<endl;
    else cout<<"2"<<endl;
    

}
 
signed main(){
    Ariful Islam
    ll TT=1;;
    cin>>TT;
    while(TT--)
        solution();
    return 0;
}

