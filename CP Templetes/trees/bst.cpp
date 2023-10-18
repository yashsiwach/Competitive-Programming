/*----------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

/*----------------------------------------------------------------------------*/

typedef long long ll;
typedef vector<int> vi;

/*----------------------------------------------------------------------------*/

#define MOD 1e9 + 7
#define pb push_back
#define ppb pop_back
#define f first
#define s second
#define nl "\n"
#define pie 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" "
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define printvector(x) for(auto i:(x)) cout<<(i)<<" "

/*----------------------------------------------------------------------------*/

template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power){ ll ans=1; while(power){if(power&1) ans=ans*base; base=base*base; power>>=1;}return ans;}


/*----------------------------------------------------------------------------*/
class node
{
public:
    int val;
    node*left;
    node*right;
    node(int val)
    {
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
node* insertbst(node*&root,int val)
{
    
    if(root==NULL)
    {
        node*temp=new node(val);
        root=temp;
        return root;

    }
    if(val>root->val)
    {
        root->right=insertbst(root->right,val);
    }
    else
    {
        root->left=insertbst(root->left,val);
    }
    return root;
}
void buildbst(node*&root)
{
    int val;
    cin>>val;
    while(val!=-1)
    {
        root=insertbst(root,val);
        cin>>val;
    }
}
void levelordertreversal(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->val<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    node* root=NULL;
    buildbst(root);
    levelordertreversal(root); 
    
}

