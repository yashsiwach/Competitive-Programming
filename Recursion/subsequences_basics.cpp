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
  void solve(string s,int i,string output)
  {
      if(i==s.length())
      {
        cout<<output<<endl;
        return ;
      }
      solve(s,i+1,output+s[i]);
      solve(s,i+1,output);
  }
  
  int main()
  {
     
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      string s,temp="";
      cin>>s;
      solve(s,0,temp);
      
  }
  
  