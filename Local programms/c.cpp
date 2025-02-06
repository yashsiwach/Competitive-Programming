//                                            जय हरियाणा ♡
#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#ifdef ONLINE_JUDGE
#define DISABLE_STACK_SIZE_CHANGE
#endif
#ifndef DISABLE_STACK_SIZE_CHANGE
#include <sys/resource.h>
#endif
typedef long long ll;
const int MOD = 1000000007;
#define pb push_back
#define is insert
#define ff first
#define ss second
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(ll i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    vector<vector<bool>> check(n,vector<bool>(n,false));
    for(ll i=0;i<n;i++){
        check[i][i]=true;
    }
    for(ll i=0;i<n-1;i++){
        check[i][i+1]=(s[i]==s[i+1]);
    }
    for(ll d=2;d<n;d++){
        for(ll i=0;i+d<n;i++){
            ll j=i+d;
            check[i][j]=(s[i]==s[j])&&check[i+1][j-1];
        }
    }
    vector<vector<ll>> dp(n,vector<ll>(n,0));
    for(ll i=0;i<n;i++){
        dp[i][i]=1;
    }
    for(ll i=0;i<n-1;i++){
        dp[i][i+1]=2+(s[i]==s[i+1]);
    }
    //dp[i][j]= n len ko l ->n-1 or l+1 ->r tak jiski len n-1 h ,common wala kat duga 
    for(ll d=2;d<n;d++){
        for(ll i=0;i+d<n;i++){
            ll j=i+d;
            dp[i][j]=dp[i][j-1]+dp[i+1][j]-dp[i+1][j-1]+check[i][j];
        }
    }
    debug(dp,check);
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;r--;
        cout<<dp[l][r]<<endl;
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef DISABLE_STACK_SIZE_CHANGE
    rlimit rlim;
    if (getrlimit(RLIMIT_STACK, &rlim) != 0) { return 1; }
    rlim.rlim_cur = 1024 * 1024 * 1024;
    if (setrlimit(RLIMIT_STACK, &rlim) != 0) { return 2; }
#endif
    ll t = 1;
    while (t--)solve();
}
