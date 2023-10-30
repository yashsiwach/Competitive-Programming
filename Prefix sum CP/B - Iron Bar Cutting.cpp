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

    vector<ll>prefix(n+1);
    vector<ll>suffix(n+1);
    vector<ll>v(n+1,0);
    //taking input
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    //making prefix array 
    for(ll i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    //making suffix array 
    for(ll i=n;i>=1;i--)
    {
        if(i==n)suffix[i]=v[i];
        else suffix[i]=suffix[i+1]+v[i];
    }
    ll mini=INT_MAX;
    for(ll i=1;i<n;i++)
    {
        ll temp=abs(suffix[i+1]-prefix[i]);
        mini=min(mini,temp);
    }
    cout<<mini<<endl;
}


