//https://cses.fi/problemset/task/1095/
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
ll solve(ll base,ll power)
{
    if(power==0){
        return 1;
    }
    if(power==1)
    {
        return base;
    }
    if(power%2==0)
    {
        ll ans=((solve(base,power/2)*(solve(base,power/2))%MOD));
        return ans%MOD;

    }
    else
    {

        ll ans=((solve(base,power/2)*(solve(base,power/2))%MOD))*base;
        return ans%MOD;
    }

}


int main()
{
//    freopen("Input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    freopen("Error.txt","w",stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll base,power;
        cin>>base>>power;
        ll ans =solve(base,power);
        cout<<ans<<endl;
    }

}