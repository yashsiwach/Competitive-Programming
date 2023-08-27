
// Submission details
// Task:   Forest Queries
// Sender: yashsiwach
// Submission time:    2023-08-28 00:45:13 +0300
// Language:   C++17
// Status: READY
// Result: ACCEPTED
// Link: https://cses.fi/problemset/task/1652

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

    ll row,queries;
    cin>>row>>queries;

    vector<vector<ll>>v(row+1,vector<ll>(row+1,0));
    for(ll i=1;i<=row;i++)
    {
        for(ll j=1;j<=row;j++)
        {
            char temp;
            cin>>temp;
            if(temp=='.') v[i][j]=0;
            else v[i][j]=1;
            //cout<<v[i][j];
        }
        //cout<<endl;
    }
    //cout<<endl;

    //creating 2d prefix array
    vector<vector<ll>>prefix(row+1,vector<ll>(row+1,0));
    for(ll i=1;i<=row;i++)
    {
        for(ll j=1;j<=row;j++)
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
// 4 3
// .*..
// *.**
// **..
// ****
// 2 2 3 4
// 3 1 3 1
// 1 1 2 2

// Output:
// 3
// 1
// 2