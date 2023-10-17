//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int ans = 0;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(a[i] < b[j])
            i++;
        else if(a[i] > b[j])
            j++;
        else{
            int temp = a[i];
            int cnt1 = 0;
            int cnt2 = 0;
            while(i < n && a[i] == temp){
                cnt1++;
                i++;
            }
            while(j < m && b[j] == temp){
                cnt2++;
                j++;
            }
            ans += (cnt1 * cnt2);
        }
    }
    cout << ans;
}

signed main() {
    fastio();
        solve();
    return 0;
}