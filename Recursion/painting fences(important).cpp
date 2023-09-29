//https://www.geeksforgeeks.org/painting-fence-algorithm/

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

int f(int n,int &k)
{
    if(n<=0||k==0)return 0;
    if(n==2) return k*k;
    if(n==1)
        return k;
    int same=f(n-2,k)*(k-1);
    int diff=f(n-1,k)*(k-1);
    cout<<same<<" "<<diff<<"->"<<same+diff<<endl;
    return same+diff;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    cout<<f(n,k);
}

