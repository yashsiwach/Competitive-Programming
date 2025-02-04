//                                            जय हरियाणा ♡
#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#ifdef ONLINE_JUDGE
#define DISABLE_STACK_SIZE_CHANGE
#endif
#ifndef DISABLE_STACK_SIZE_CHANGE
#include <sys/resource.h>
#endif
typedef long long ll;
const int MOD = 1000000007;
#define pb push_back
#define is insert
#define ff first
#define ss second
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(ll i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}
class node {
public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val=val;
        left=nullptr;
        right=nullptr;
    }
};
void printer(node* root) {
    queue<node*>q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()) {
        node* temp=q.front();
        q.pop();
        if(temp==nullptr) {
            cout<<nl;
            if(!q.empty())q.push(nullptr);
            continue;
        }
        cout<<temp->val<<' ';
        if(temp->left!=nullptr)q.push(temp->left);
        if(temp->right!=nullptr)q.push(temp->right);
    }
}
int num;
vector<node*>trees;
vector<vector<node*>>dp_trees(20);  
void solve(int l,int r,int n) {
    for(auto it:dp_trees[l]) {  
        node* root=new node(1);
        root->left=it;
        for(auto i:dp_trees[r]) {
            root->right=i;
            if(n==num)trees.push_back(root);
            dp_trees[n].push_back(root);  
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef DISABLE_STACK_SIZE_CHANGE
    rlimit rlim;
    if (getrlimit(RLIMIT_STACK, &rlim) != 0) { return 1; }
    rlim.rlim_cur = 1024 * 1024 * 1024;
    if (setrlimit(RLIMIT_STACK, &rlim) != 0) { return 2; }
#endif
    cin>>num;
    vector<int>dp(num+1,0);
    dp[0]=1;
    dp_trees[0].push_back(nullptr);  
    loop(i,1,num+1){
        int ans=0;
        for(int j=0;j<i;j++) {
            int l=j,r=i-j-1;
            solve(l,r,i);  
            ans+=dp[l]*dp[r];
        }
        dp[i]=ans;
    }
    debug(dp);
    for(auto it:trees) {
        printer(it);
        cout<<nl;
    }
}
