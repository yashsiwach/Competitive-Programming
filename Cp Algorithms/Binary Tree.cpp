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

class node
{
    int val;
    node*left;
    node*right;
    node(int val)
    {
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }

}
void builtree(int n,vector<int>&v)
{
    node*root=new node(v[0]);
    queue<node*>q;
    q.push(v[i]);
    while(!q.empty()&&i<n)
    {
        node*temp=q.front();
        q.pop();
        if(v[i]!=-1)
        {
            temp->left=new node(v[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*root=NULL;
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    root=builtree(n,v);
}

