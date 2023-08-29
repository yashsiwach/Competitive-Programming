
// Submission details
// Task:   Subarray Sums I
// Sender: yashsiwach
// Submission time:    2023-08-29 23:55:45 +0300
// Language:   C++
// Status: READY
// Result: ACCEPTED
// LINK: https://cses.fi/problemset/task/1660/


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

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    //creating prefix sum array
    vector<ll>prefix(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        prefix[i]=v[i]+prefix[i-1];
    }
    //finding subarrays
    ll i=1,j=1,count=0;
    while(j<=n)
    {

        if(i==j)
        {
            ll target=prefix[j]-prefix[j-1];
            if(target==k)
            {
                count++;
                i++;
                j=i;
            }
            else 
            {

                j++;
            }
            
        }
        else if(i<j)
        {
            ll target=prefix[j]-prefix[i-1];
            if(target==k)
            {
                count++;
                j++;
            }
            else if(target>k)
            {
                i++;
            }
            else 
            {
                j++;
            }

        }
       

    }
    cout<<count<<endl;



}

// input
// 10 7
// 1 1 1 1 1 1 1 1 3 4

// correct output
// 4

// user output
// 4