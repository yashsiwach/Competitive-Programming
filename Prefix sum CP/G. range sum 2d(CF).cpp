
// #	When	Who	Problem	Lang	Verdict	Time	Memory
// 220793291	Aug/28/2023 04:06UTC+5.5	yash_siwach	G - range sum 2d	GNU C++17	Accepted	390 ms	7000 KB




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

    ll row,col,queries;
    cin>>row>>col>>queries;

    vector<vector<ll>>v(row+1,vector<ll>(col+1,0));
    for(ll i=1;i<=row;i++)
    {
        for(ll j=1;j<=col;j++)
        {
            cin>>v[i][j];
            //cout<<v[i][j];
        }
        //cout<<endl;
    }
    //cout<<endl;

    //creating 2d prefix array
    vector<vector<ll>>prefix(row+1,vector<ll>(col+1,0));
    for(ll i=1;i<=row;i++)
    {
        for(ll j=1;j<=col;j++)
        {
            prefix[i][j]=v[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
            //cout<<prefix[i][j];
        }
        //cout<<endl;
    }

    while(queries--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ll ans=prefix[x2][y2]-prefix[x1-1][y2]-prefix[x2][y1-1]+prefix[x1-1][y1-1];
        cout<<ans<<endl;


    }

}

// Input:
// 5 5 3
// 1 2 3 4 5
// 5 3 2 2 9
// 2 4 8 5 11
// 10 12 4 9 4
// 1 1 1 1 1
// 1 1 5 5
// 3 4 5 4
// 1 2 1 2


// Output:
// 110
// 15
// 2
