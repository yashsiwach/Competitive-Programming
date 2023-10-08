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
    unordered_map<int,vector<int>>adjlist;
    void addedge(int from,int to)
    {
        
        adjlist[from].pb(to);
        adjlist[to].pb(from);
    }
    void printlist()
    {
        for(auto it:adjlist)
        {
            cout<<"from->"<<it.first<<" to-> ";
            for(auto nbr:it.second)
            {
                cout<<"("<<nbr<<")";
            }
            cout<<endl;
        }
    }
    void bfs(int firstnode, unordered_map<int, bool>& visited) 
    {
        queue<int> q;
        q.push(firstnode);
        visited[firstnode] = true;
        while (!q.empty()) 
        {
            int front = q.front();
            q.pop();
            cout << front << " ";
            for (auto neighbor : adjlist[front]) 
            {  
                if (!visited[neighbor])
                {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
    void dfs(int src,unordered_map<int,bool>&visited2)
    {
        cout<<src;
        visited2[src]=true;
        for(auto nbr:adjlist[src])
        {
            if(!visited2[nbr])
            {
                visited2[nbr]=true;
                dfs(nbr,visited2);

            }
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
    int n=nodes;
    unordered_map<int,bool>visited;
    unordered_map<int,bool>visited2;

    while(nodes--)
    {
        int from,to;
        cin>>from>>to;
        g.addedge(from,to);
    }
    g.printlist();
    cout<<endl;

    g.bfs(0,visited);
    cout<<endl;

    for(int i=0; i<n; i++) 
    {
        if(!visited2[i]) 
        {
            g.dfs(i, visited2);
        }
    }

}


/*
input:
4
0 1 
0 2 
1 3 
2 3 
*/