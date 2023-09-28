/*
---------------Binary Exponentation---------------

#Recursive Method
-->Time complexity is O(log n)

Explaination : if(power ) is very big to calculate. 
So we divide the power into 2 part ->
[if power is even :- (power/2)*(power/2)] 
[if power is off :- number *(power/2)*(power/2)]

#itreative Method 

Explaination : consider the power in binary like 13 =1101 ,where 1 comes just multiple the base with 2 to pow(0,2,4,8)to convert binary to interger 
means pick the base which has the bit place 1 and multiply (to make binary to interger)
eg:
 power  1     1    0    1
 base   3^8  3^4  3^2  3^1
        AC   AC   WA   AC

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

/* ---------------Recursive--------------*/
ll binarypower(ll base,ll power)
{
    if(power==0)
    {
        return 1;
    }
    //to avoid the 2 time calls of rescursion we will store the result of the 1 recursion 
    //divide into 2 part power so that we can 2^2 * 2^2 =2^4;
    ll tempans=binarypower(base,power/2);
    if(power&1)
    {
        //if(power is odd we have to * the number seprately to the power. we can only divide ever number in to 2 parts)
        return base*tempans*tempans;
    }
    else 
    {
        // if power is even then divide it into the 2 parts and solve that  2 parts using recursion 
        return tempans*tempans;
    }
}

/* --------------Itrative---------------*/
ll binarypowerIt(ll base,ll power)
{
    ll ans=1;
    //Right shift the power in binary till it becomes 0;
    while(power)
    {
        //if(bit is set(1) multiply the base with 2 to the power bit position (0,1,2,4,8))
        //means pick the base which has bit set(1) and multiply to ans if
        if(power&1)
        {
            ans=ans*base;
        }
        //update the base as considering the the all bits are 1 
        cout<<base<<endl;
        base=base*base;
        power>>=1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a,b;
    cin>>a>>b;
    cout<<binarypower(a,b)<<endl;
    cout<<binarypowerIt(a,b)<<endl;
}

