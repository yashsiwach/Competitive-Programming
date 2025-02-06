//                                            जय हरियाणा ♡
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
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

void solve()
{
    cout<<0<<nl;
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
    ll t = 1; cin>>t;
    while (t--)solve();
}
