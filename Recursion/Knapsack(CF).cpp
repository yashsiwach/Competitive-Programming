//Sep/23/2023 22:40UTC+5.5	yash_siwach	U - Knapsack	GNU C++17	Accepted	31 ms	0 KB
//link https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
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
#define to_binary(x) bitset<32> binary(x);

ll solve(ll i, vector<pair<ll, ll>> &v,ll &x, ll sum, ll sum2) {
    if (i >= v.size()) {
        if (sum <= x) {

            return sum2;
        }
        else return INT_MIN;
    }
    ll temp1 = solve(i + 1, v, x, sum + v[i].first, sum2 + v[i].second);
    ll temp2 = solve(i + 1, v, x, sum, sum2);
    return max(temp1, temp2);
}


int main() {
//    freopen("Input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    freopen("Error.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin>>n>>x;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    ll i = 0;
    ll sum = 0;
    ll ans = solve(i, v, x, sum, 0);
    cout << ans;
    return 0;

}