//224775725	Sep/23/2023 21:27UTC+5.5	yash_siwach	W - Reach Value	GNU C++17	Accepted	15 ms	0 KB
//link https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
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

bool solve(ll i,ll &n)
{
    if(i>=n)
    {
        if(i==n)
        {
            return true;
        }
        else return false;
    }
    bool first=solve(i*10,n);
    bool sec=solve(i*20,n);
    return first||sec;
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
        ll n;
        cin>>n;
        ll i=1;
        if(solve(i,n))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


    }

}