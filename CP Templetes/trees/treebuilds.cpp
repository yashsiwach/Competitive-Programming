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
class node{
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
node* buildtree(int n,vector<int>&v)
{
	queue<node*>q;
	node*root=new node(v[0]);
	q.push(root);
	int i=1;
	while(i<n&&!q.empty())
	{
			node*temp=q.front();
			q.pop();
			if(v[i]!=-1)
			{
				temp->left=new node(v[i]);
				q.push(temp->left);
			}
			i++;

			if(i<n)
			{
				if(v[i]!=-1)
				{
					temp->right=new node(v[i]);
					q.push(temp->right);
				}
				i++;
			}
		
	}
	return root;
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
			cout<<root->val<<" ";
			if(root->left)
			{
				q.push(root->left);
			}
			if(root->right){
				q.push(root->right);
			}
			
		}
	}
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n!=-1)
    {
    	v.push_back(n);
    	cin>>n;
    }
    v.push_back(-1);
    node*root=buildtree(v.size(),v);
    levelordertreversal(root);
}

