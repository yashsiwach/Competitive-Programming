// Sep/07/2023 16:55UTC+5.5    yash_siwach A - Greg and Array  GNU C++17   Accepted    202 ms  7000 KB
//Link:https://codeforces.com/contest/295/problem/A
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, o, q;
    cin >> n >> o >> q;
    
    vector<ll> v(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<pair<pair<ll, ll>, ll>> op;
    for (ll i = 0; i < o; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        op.push_back({{a, b}, c});
    }

    vector<ll> queries(o + 2, 0);
    while (q--) {
        ll a, b;
        cin >> a >> b;
        queries[a]++;
        queries[b + 1]--;
    }

    vector<ll> prefix(o + 2, 0);
    for (ll i = 1; i <= o; i++) {
        prefix[i] = prefix[i - 1] + queries[i];
    }

    // prll(prefix);
    ll j = 1; 
    vector<ll> ans(n + 2, 0);
    for (auto i : op) {
        ll a = i.first.first;
        ll b = i.first.second;
        ll c = i.second;
        ans[a] += (c*prefix[j]);
        ans[b + 1] -= (c*prefix[j]);
        j++;
    }

    vector<ll> prefix2(n + 2, 0);
    for (ll i = 1; i <= n; i++) {
        prefix2[i] = prefix2[i - 1] + ans[i];
    }
    for (ll i = 1; i <= n; i++) {
        prefix2[i] +=v[i];
    }
    for (ll i = 1; i <= n; i++) {
        cout<<prefix2[i]<<" ";
    }
    cout<<endl;
  
    // for (auto i : prefix2) cout << i << " ";
}
