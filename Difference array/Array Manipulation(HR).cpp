//link:-https://www.hackerrank.com/challenges/crush/problem

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
#define debug(x) cerr << x << " ";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 2, 0); 
    while (q--)
    {
        ll l, h, val;
        cin >> l >> h >> val;
        v[l] += val;
        v[h + 1] -= val; 
    }
  
    
    vector<ll> prefix(n + 2, 0); 
    ll maxi = INT_MIN;
    for (ll i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
        //cout << prefix[i] << " ";
        maxi = max(maxi, prefix[i]);
    }
    cout<<maxi<<endl;
}