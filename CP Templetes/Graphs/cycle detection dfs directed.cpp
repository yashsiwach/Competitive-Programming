#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define DISABLE_STACK_SIZE_CHANGE
#endif
#ifndef DISABLE_STACK_SIZE_CHANGE
#include <sys/resource.h>
#endif
typedef long long ll;
const ll MOD = 1000000007;
#define pb push_back
#define ff first
#define ss second
#define nl "\n"
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
#define showadj for (auto it : adj) { cout << it.ff << " ->"; for (auto i : it.ss) cout << i << " "; cout << endl; }
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power,T mod){ ll ans=1;  base = base % mod;while(power){if(power&1) ans=(ans*base)%mod; base=((base*base)%mod); power>>=1;}return ans;}

bool dfs(int node,unordered_map<int,bool>&visi,unordered_map<int,vector<int>>&adj,int parent,unordered_map<int,bool>&dfsvisi)
{
    visi[node]=true;
    dfsvisi[node]=true;
    for(auto nbr:adj[node])
    {
        if(!visi[nbr])
        {
            bool ans=dfs(nbr,visi,adj,node,dfsvisi);
            if(ans)return true;
        }
        else 
        {
            if(dfsvisi[nbr])return true;
        }
    }
    dfsvisi[node]=false;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    #ifndef DISABLE_STACK_SIZE_CHANGE
    rlimit rlim;
    if (getrlimit(RLIMIT_STACK, &rlim) != 0) {return 1;}
    rlim.rlim_cur = 1024 * 1024 * 1024;
    if (setrlimit(RLIMIT_STACK, &rlim) != 0) {return 2;}
    #endif

    int n;
    cin>>n;
    unordered_map<int,vector<int>>adj;
    unordered_map<int,bool>visi;
    unordered_map<int,bool>dfsvisi;
    loop(i,0,n)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
    }
    loop(i,0,n+1)
    {
        if(!visi[i])
        {
            bool ans=dfs(i,visi,adj,0,dfsvisi);
            if(ans)
            {
                cout<<"cycle"<<endl;
                return 0;
                break;
            }
        }
    }
    cout<<"no"<<endl;
}

