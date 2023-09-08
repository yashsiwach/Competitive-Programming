//https://codeforces.com/contest/177/problem/D2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" ";
#define print(a)       for(auto x : a) cout << x << " "; cout << endl


int main()
{
    

  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, c;
    cin >> n >> m >> c;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> key(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> key[i];
    }
 

    int l = 0;
    int r = n-m;
    vector<long long> diffarr(n+1,0);
    for(int i=0;i<m;i++){
        diffarr[l]+=key[i];
        diffarr[r+1]-=key[i];
        l++;r++;
    }
    for(ll i =1;i<=n;i++){
        diffarr[i]+=diffarr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<(v[i]+diffarr[i])%c<<" ";
    }
}
    
   