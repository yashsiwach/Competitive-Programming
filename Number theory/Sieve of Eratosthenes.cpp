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
#define to_binary(x) bitset<32> binary(x);

int num=1000007;
vector<bool>seive(num+1,true);
void check()
{
    for(int i = 2; i * i <= num; i++)
    {
        if(seive[i])
        {
            for(int j = i * i; j <= num; j += i)
            {
                seive[j] = false;
            }
        }
    }
}
int main()
{
    freopen("Input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt","w",stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    check();
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(seive[a])
        {
            cout<<"prime"<<endl;
        }
        else
        {
            cout<<"non prime"<<endl;
        }

    }

}