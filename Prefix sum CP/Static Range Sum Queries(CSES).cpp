
// Submission details
// Task:   Static Range Sum Queries
// Sender: yashsiwach
// Submission time:    2023-08-27 22:23:15 +0300
// Language:   C++
// Status: READY
// Result: ACCEPTED
// Link:https://cses.fi/problemset/task/1646


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

    ll value,query;
    cin>>value>>query;
    vector<ll>v(value+1,0);
    
    for(ll i=1;i<=value;i++)
    {
        cin>>v[i];
    }
    
    //creating the prefix array 1 based indexing
    vector<ll>prefix(value+1,0);

    for(ll i=1;i<=value;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }

    //running tasks in ranges
    while(query--)
    {
        ll start,end;
        cin>>start>>end;
        ll sum =0;
        for(ll i=start;i<=end;i++)
        {

            sum=prefix[end]-prefix[start-1];
        }
        cout<<sum<<endl;



    }





// #ifndef ONLINE_JUDGE
//     cout<<endl<<"Time: "<<fixed<<setprecision(6)<<((double)(clock()-time_req))/CLOCKS_PER_SEC<<endl;
// #endif
}

