// Sep/05/2023 23:32UTC+5.5	yash_siwach	B - Karen and Coffee	GNU C++17	Accepted	826 ms	6300 KB
//
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,q;
    ll size=200000;
    vector<ll>v(size+1,0);
    cin>>n>>k>>q;

    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        v[a]++;
        v[b+1]--;
    }
    vector<ll>prefix(size+1,0);
    for(ll i=1;i<=size;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    vector<ll>check(size+1,0);
    for(ll i=1;i<=size;i++)
    {
        if(prefix[i]>=k)
        {
            check[i]=1;
        }
    }
     vector<ll>prefix2(size+1,0);
    for(ll i=1;i<=size;i++)
    {
        prefix2[i]=prefix2[i-1]+check[i];
    }
    while(q--)
    {
        ll l,h;
        cin>>l>>h;
        ll ans=prefix2[h]-prefix2[l-1];
        cout<<ans<<endl;
    }

}

