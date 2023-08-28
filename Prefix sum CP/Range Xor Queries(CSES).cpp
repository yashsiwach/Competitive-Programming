
// Submission details
// Task:   Range Xor Queries
// Sender: yashsiwach
// Submission time:    2023-08-28 20:12:27 +0300
// Language:   C++
// Status: READY
// Result: ACCEPTED
// link: https://cses.fi/problemset/task/1650/

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

    //clock_t time_req=clock();

    int n,k;
    cin>>n>>k;
    vector<int>v(n+1,0);
    //input
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
//creating xor prefix array
    vector<int>prefix(n+1,0);
    for(int i=1;i<=n;i++)
    {
        prefix[i]=v[i]^prefix[i-1];
    }
    
//running queries
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        int ans=prefix[b]^prefix[a-1];
        cout<<ans<<endl;
    }
}

// Input:
// 8 4
// 3 2 4 5 1 1 5 3
// 2 4
// 5 6
// 1 8
// 3 3

// Output:
// 3
// 0
// 6
// 4