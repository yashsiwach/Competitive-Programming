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
//input :
// 4 4
// 1 2 3 4
// 5 6 7 8
// 9 8 7 6
// 7 8 9 5

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    clock_t time_req=clock();

    int row,col;
    cin>>row>>col;
    //1 based indexing insertion
    vector<vector<int>> v(row+1, vector<int>(col+1, 0));

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cin>>v[i][j];
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //making the prefix sum 1 based 
    vector<vector<int>> prefix(row+1, vector<int>(col+1, 0));

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
          //curr ele.(pre)=curr +prefix of upr + prefix ->left -up left corner (because added 2 times)
            prefix[i][j]=v[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
            cout<<prefix[i][j]<<" ";
        }
        cout<<endl;
    }



#ifndef ONLINE_JUDGE
    cout<<endl<<"Time: "<<fixed<<setprecision(6)<<((double)(clock()-time_req))/CLOCKS_PER_SEC<<endl;
#endif
}

