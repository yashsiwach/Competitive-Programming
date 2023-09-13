//to learnn how to handle extra big test cases 
//https://codeforces.com/contest/1213/problem/C
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



int main()
{
//    freopen("Input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    freopen("Error.txt","w",stderr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        long long n, m;
        cin >> n >>  m;
        long long array[10];
        long long sum = 0;
        for(int i = 0; i < 10; i++)  {
            array[i] = (m * (i+1)) % 10;
            sum += array[i];
        }
        long long y = n/m;
        long long ans = (y/10) * sum;
        y = y % 10;
        for(int i = 0; i < y; i++)  {
            ans += array[i];
        }
        cout << ans << "\n";


    }

}