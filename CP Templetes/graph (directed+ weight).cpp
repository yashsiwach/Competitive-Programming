/*-----------------------------AIR-1-----------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------------------------------------------------*/
typedef long long ll;
typedef vector<int> vi;

/*----------------------------------------------------------------------------*/
#define MOD 1e9 + 7
#define pb push_back
#define ppb pop_back
#define f first
#define s second
#define nl "\n"
#define pie 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" "
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define printvector(x) for(auto i:(x)) cout<<(i)<<" "

/*----------------------------------------------------------------------------*/
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power){ ll ans=1; while(power){if(power&1) ans=ans*base; base=base*base; power>>=1;}return ans;}


/*----------------------------------------------------------------------------*/
class graph
{
public:
    unordered_map<int,vector<pair<int,int>>>adjlist;
    void addedge(int from,int to,int weight)
    {
        
        adjlist[from].pb({to,weight});
    }
    void printlist()
    {
        for(auto it:adjlist)
        {
            cout<<"from->"<<it.first<<" to-> ";
            for(auto nbr:it.second)
            {
                cout<<"("<<nbr.f<<","<<nbr.s<<")";
            }
            cout<<endl;
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    graph g;
    int nodes;
    cin>>nodes;
    while(nodes--)
    {
        int from,to,weight;
        cin>>from>>to>>weight;
        g.addedge(from,to,weight);
    }
    g.printlist();
    
    
}


/*
input:
4
0 1 5
0 2 8
1 3 4
2 3 6
*/