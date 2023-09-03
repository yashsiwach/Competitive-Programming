//LINK:-https://codeforces.com/contest/276/problem/C 
//221757476	Sep/04/2023 02:52	Accepted
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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    //creating difference array
    vector<ll>diff(n+2,0);
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        diff[a]=diff[a]+1;
        diff[b+1]=diff[b+1]-1;
    }
    //creating prefix sum 
    vector<ll>prefix(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+diff[i];
        
    }
    sort(all(prefix));
    sort(all(v));
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        sum+=(prefix[i]*v[i]);
    }
    cout<<sum<<endl;
}

