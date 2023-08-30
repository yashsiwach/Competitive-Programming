// https://atcoder.jp/contests/abc125/tasks/abc125_c

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
#define debug(x) cerr << x << " ";
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //clock_t time_req = clock();

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    //7 6 8
    // creating prefix gcd 
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix[i] = v[i];
        }
        else
        {
        	int a=prefix[i-1];
        	int b=v[i];
            prefix[i] = gcd(a, b);

        }
    }
    //7 1 1
    //crating sufix gcd array
    vector<int>prefix2(n);
    for(int i=n-1;i>=0;i--)
    {
    	if(i== n-1)
    	{
    		prefix2[i]=v[i];
    	}
    	else
    	{
    		prefix2[i]=gcd(prefix2[i+1],v[i]);
    	}
    }
    //1 2 8
    

    int ans = 0 ;
    
    for(int i = 0 ; i < n ;i++){
      
      if(i ==0) ans = max(ans , prefix2[i+1]);
      else if (i==n-1) ans = max(ans , prefix[i-1]);
      else {
        ans = max(ans , gcd(prefix[i-1] , prefix2[i+1]));
      }
      
    }
    cout<<ans<<endl;

}
