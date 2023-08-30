
// Submission details
// Task:   Subarray Divisibility
// Sender: yashsiwach
// Submission time:    2023-08-30 21:38:51 +0300
// Language:   C++17
// Status: READY
// Result: ACCEPTED
// link: https://cses.fi/problemset/task/1662/

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
    ll n,ans=0;
    cin>>n;
    //input and make prefix sum array 
    vector<ll>v(n+1,0);
    vector<ll>prefix(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(ll i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
//now take the mod of the each element in sum array and count frequency  
    map<ll,ll>m;
    for(ll i=1;i<=n;i++)
    {
        ll temp=(prefix[i]%n+n)%n;
        m[temp]++;
    }
    //if( 0 then handle +1 case and other same values cal simple formula to find the n/2 means 2 same freq==ans+1)
    for(auto i:m)
    {
        ll temp=i.second;
        if(i.first==0)
        {
            ans+=(temp*(temp+1))/2;
        }
        else
        {
            ans+=(temp*(temp-1))/2;
        }
    }
    cout<<ans;

  
}

