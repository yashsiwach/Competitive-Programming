//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
//224763240	Practice:
//yash_siwach	223339V - 14	GNU C++17	Accepted	15 ms	8 KB	2023-09-23 17:57:26	2023-09-23 17:57:26	
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

bool solve(int i, vector<int>& v, int x, int sum) {
    if (i == v.size()) {
        if (sum == x) {
            return true;
        }
        return false;
    }
    bool add = solve(i + 1, v, x, sum + v[i]);
    bool subtract = solve(i + 1, v, x, sum - v[i]);
    return add || subtract;
}

int main() {
//    freopen("Input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    freopen("Error.txt", "w", stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int i = 1, sum = 0;
    if (solve(i, v, x, v[0])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}