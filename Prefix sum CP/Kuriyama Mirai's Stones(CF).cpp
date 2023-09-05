//Sep/06/2023 00:19UTC+5.5  yash_siwach B - Kuriyama Mirai's Stones GNU C++17   Accepted    405 ms  2400 KB
//link:https://codeforces.com/contest/433/problem/B
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
    ll n;
    cin>>n;
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    //prefix array
    vector<ll>prefix1(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        prefix1[i]=prefix1[i-1]+v[i];
    }
    sort(all(v));
    vector<ll>prefix2(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        prefix2[i]=prefix2[i-1]+v[i];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans=0;
        if(a==1)
        {
            ans=prefix1[c]-prefix1[b-1];
        }
        else
        {
            ans=prefix2[c]-prefix2[b-1];
        }
        cout<<ans<<endl;
    }

    
}

