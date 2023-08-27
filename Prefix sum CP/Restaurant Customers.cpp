
// Submission details
// Task:   Restaurant Customers
// Sender: yashsiwach
// Submission time:    2023-08-27 23:17:09 +0300
// Language:   C++17
// Status: READY
// Result: ACCEPTED
//LINK: https://cses.fi/problemset/task/1619

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
    vector<pair<ll,ll>>v;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(),v.end());

    //makeing prefix sum array
    vector<ll>prefix(v.size());
    prefix[0]=v[0].second;
    for(ll i=1;i<v.size();i++)
    {
        prefix[i]=prefix[i-1]+v[i].second;
    
    }
    
    //finding max
    ll maxi=INT_MIN;
    for(auto i:prefix)
    {
        maxi=max(maxi,i);
    }
    cout<<maxi<<endl;
}

