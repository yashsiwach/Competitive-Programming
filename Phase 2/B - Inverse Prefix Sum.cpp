#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i==1)cout<<v[i]<<" ";
        else cout<<v[i]-v[i-1]<<" ";
    }
}

