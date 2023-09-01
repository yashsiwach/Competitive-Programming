//link:https://atcoder.jp/contests/abc177/tasks/abc177_c
//C - Sum of product of pairs   Yashsiwach  C++ (GCC 9.2.1) 300 841 Byte AC       42 ms   6348 KB

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
     
    }
    //creating prefix array
 
    vector<ll>prefix(n+1,0);
    for(ll i=1;i<=n;i++)
    {
       
        prefix[i]=prefix[i-1]+v[i-1];
        
    }
    ll sum =0;
    for(ll i=1;i<=n;i++)
    {
        sum+=((v[i-1])%mod*((prefix[n]-prefix[i])%mod))%mod;
        
       
    }
    cout<<sum%mod<<endl;
}

