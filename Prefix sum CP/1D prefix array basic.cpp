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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    clock_t time_req=clock();
// 1 based indexing not 0
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  //input  taken 1,2,3,4,5

  vector<int> prefix(n +1, 0);
  prefix[0] = 0;
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + v[i];
  }
//first element is 0 and later on 1 3 6 10 15 done!!

  for (auto i : prefix) {
    cout << i << " ";
  }




#ifndef ONLINE_JUDGE
    cout<<endl<<"Time: "<<fixed<<setprecision(6)<<((double)(clock()-time_req))/CLOCKS_PER_SEC<<endl;
#endif
}

