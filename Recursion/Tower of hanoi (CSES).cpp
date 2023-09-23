//https://cses.fi/problemset/task/2165/
// Submission details
// Task:	Tower of Hanoi
// Sender:	yashsiwach
// Submission time:	2023-09-23 21:36:22 +0300
// Language:	C++20
// Status:	READY
// Result:	ACCEPTED

// just find the helper in n-1 move and done !!!
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
int ans=0;
vector<pair<char,char>>v;
void solve(int n,char a,char b,char c)
{
    if(n==0)
    {
        return ;
    }
    solve(n-1,a,c,b);
    v.push_back({a,c});
    ans++;
    solve(n-1,b,a,c);
}
int main()
{
//    freopen("Input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    freopen("Error.txt","w",stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    solve(n,'1','2','3');
    cout<<ans<<endl;
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

}