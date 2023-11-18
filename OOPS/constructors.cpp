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
unordered_map<int,vector<int>>adj;
unordered_map<int,bool>visi;
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
#define showadj for (auto it : adj) { cout << it.ff << " ->"; for (auto i : it.ss) cout << i << " "; cout << endl; }
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power,T mod){ ll ans=1;  base = base % mod;while(power){if(power&1) ans=(ans*base)%mod; base=((base*base)%mod); power>>=1;}return ans;}

class demo
{
    int a,b;
public:
    //default constructor called
    demo()
    {
        a=10;
        b=20;
    }
};
class demo2
{
    int c;
public:

}
//default constructor
demo2::demo2()
{
    c=10;
}


class paraconst
{
    int a,b;
public:
    //parametized constructor
    paraconst(int n,int m)
    {
        a=n;
        b=m;
    }
};
class cupy
{
    int a;
public:
    cupy()
    {
        a=10;
    }//copy constructor use to copy the obj to other obj of ssame class 
    //cupy a; cupy b(a); like this data is copied;
    cupy(cupy&temp)
    {
        a=temp.a;
    }
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

    
}

