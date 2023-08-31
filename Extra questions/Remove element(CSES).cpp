
// Submission details
// Task:   Removing Digits
// Sender: yashsiwach
// Submission time:    2023-08-31 17:54:51 +0300
// Language:   C++17
// Status: READY
// Result: ACCEPTED
// link: https://cses.fi/problemset/task/1637

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

    int n,count=0,temp1=0;
    cin>>n;
    vector<int>v;
    while(n>0){
        
        temp1=n;
        while(temp1!=0)
        {
            int temp=temp1%10;
            temp1=temp1/10;
            v.push_back(temp);
        }
        int maxi=INT_MIN;
        
        for(auto i:v)
        {
            
            maxi=max(maxi,i);
        }
        v.clear();
        count++;
        n=n-maxi;
        
    }
    cout<<count<<endl;
}
