/*
--------------GCD using Euclidean Algorithm---------------

Time complexity :O(log min(a,b));



*/
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
int gcdline(int a,int b)
{
    return b ? gcdline(b,a%b) : a;
}
int gcd(int a,int b)
{
    //if dividend is 0 then return a;
    if(b==0) return a;
    //Now divisor will become divident and reminder will becomes divisor  
    else return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a ,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;  
    cout<<gcdline(a,b)<<endl;  
}

