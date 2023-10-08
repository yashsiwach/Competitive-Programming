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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<binpow(2,3)<<nl;

    
    
}

