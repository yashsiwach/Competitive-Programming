//link:https://atcoder.jp/contests/abc194/tasks/abc194_c
//accepted
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
    ll sq=0,sum=0;

    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
     
        sq=sq+(v[i]*v[i]);
        sum=sum+v[i]; 
    }
    //formula used n*(Ai)^2 -(sum of array )^2;

    sum=pow(sum,2);
    cout<<(n*sq-sum)<<endl;
}

