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
vector<int>row{0,-1,-1,-1,0,1,1,1};
vector<int>col{1,1,0,-1,-1,-1,0,1};
#define pb push_back
#define sz(x) (ll)x.size()
#define ff first
#define ss second
#define nl "\n"
#define allr(v) (v).rbegin(),(v).rend()
unordered_map<int, vector<int>> adj;
unordered_map<int, bool> visi;
#define set_bits(x) __builtin_popcountll(x)
#define ceil(x,y) ceil(double(x)/y)
#define floor(x,y) floor(double(x)/y)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
#define showadj for (auto it : adj) { cout << it.ff << " ->"; for (auto i : it.ss) cout << i << " "; cout << endl; }
template <typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

template <typename T>
T binpow(T base, T power, T mod)
{
    ll ans = 1;
    base = base % mod;
    while (power)
    {
        if (power & 1) ans = (ans * base) % mod;
        base = ((base * base) % mod);
        power >>= 1;
    }
    return ans;
}

class sgt
{
public:
    vector<int>seg;
    sgt(int n)
    {
        seg.resize(4*n+1);
    }
    void build(int i,int low,int high)
    {
        if(low==high){seg[i]=0;return;}
        int mid=(low+high)>>1;
        build(2*i+1,low,mid);
        build(2*i+2,mid+1,high);
        seg[i]=seg[2*i+1]+seg[2*i+2];
    }
    int query(int i,int low,int high,int l,int r)
    {
        if(r<low||l>high)return 0;
        if(l<=low&&high<=r)return seg[i];
        int mid=(low+high)>>1;
        int left=query(2*i+1,low,mid,l,r);
        int right=query(2*i+2,mid+1,high,l,r);
        return left+right;
    }
    void update(int i,int low,int high,int ind)
    {
        if(low==high){seg[i]=1;return;}
        int mid=(low+high)>>1;
        if(ind<=mid)update(2*i+1,low,mid,ind);
        else update(2*i+2,mid+1,high,ind);
        seg[i]=seg[2*i+1]+seg[2*i+2];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef DISABLE_STACK_SIZE_CHANGE
    rlimit rlim;
    if (getrlimit(RLIMIT_STACK, &rlim) != 0) { return 1; }
    rlim.rlim_cur = 1024 * 1024 * 1024;
    if (setrlimit(RLIMIT_STACK, &rlim) != 0) { return 2; }
#endif

// #ifndef ONLINE_JUDGE
//     freopen("Input.txt", "r",stdin);
//     freopen("Output.txt", "w",stdout);
//     freopen("Error.txt", "w",stderr);
// #endif
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(n);
    vector<int>u,ans;
    loop(i,0,n)
    {
        int temp;cin>>temp;
        u.pb(temp);
        v[i]={temp,i};
    }
    sort(all(v));
    map<int,int>mp;
    loop(i,0,n)
    {
        mp[v[i].ff]=i;
    }
    sgt s(n);
    s.build(0,0,n-1);
    for(auto it:u)
    {
        int ind=mp[it];
        int out=s.query(0,0,n-1,0,ind-1);
        ans.pb(out);
        s.update(0,0,n-1,ind);
    }
    while(k--)
    {
        int a;cin>>a;
        cout<<ans[a]<<endl;
    }


}
