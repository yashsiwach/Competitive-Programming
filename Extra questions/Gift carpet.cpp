//https://codeforces.com/problemset/problem/1862/A
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
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	vector<vector<char>>v(n,vector<char>(m,'a'));
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			cin>>v[i][j];
    		}
    	}
    	string s="vika";
    	int k=0;
    	for(int i =0;i<m;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			// cout<<i<<" "<<j<<" "<<"("<<v[j][i]<<")";
    			if(v[j][i]==s[k])
    			{
    				//cout<<i<<" "<<j<<" "<<"("<<v[j][i]<<")";
    				k++;
    				break;
    			}
    		}
    		// cout<<endl;
    		
    	}
    	if(k==4)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;

    }
    
}

