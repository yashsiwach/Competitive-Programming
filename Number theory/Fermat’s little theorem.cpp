
// Submission details
// Task:	Exponentiation II
// Sender:	yashsiwach
// Submission time:	2023-09-12 00:20:09 +0300
// Language:	C++20
// Status:	READY
// Result:	ACCEPTED
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


ll solve(ll base,ll power,ll m)
{
    if(power==0) return 1;
    ll x=solve(base,power/2,m)%m;
    ll ans=(x*x)%m;
    if(power%2)
    {
        ans=(ans*base)%m;
    }
    return ans;
}
int main()
{
//    freopen("Input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    freopen("Error.txt","w",stderr);
//    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
//        ll newpower=(b * c);
//        cout << solve(a, newpower) << endl;
        ll firstans=solve(b,c,MOD-1);
        ll anss=solve(a,firstans,MOD);
        cout<<anss<<endl;

    }

}