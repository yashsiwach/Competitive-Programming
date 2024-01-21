class sgt{
public:
    vector<int>seg;
    sgt(int n)
    {
        seg.resize(4*n+1);
    }
    void build(int i,int low,int high,vector<int>&v)
    {
        if(low==high){seg[i]=v[low];return;}
        int mid=(low+high)>>1;
        build(2*i+1,low,mid,v);
        build(2*i+2,mid+1,high,v);
        seg[i]=seg[2*i+1]+seg[2*i+2];
    }
    int query(int i,int low ,int high ,int l,int r)
    {
        if(l>high||r<low)return 0;
        if(l<=low&&r>=high)return seg[i];
        int mid=(low+high)>>1;
        int left=query(2*i+1,low,mid,l,r);
        int right=query(2*i+2,mid+1,high,l,r);
        return left+right;
    }
    void update(int i,int low,int high,int ind,int val)
    {
        if(low==high){seg[i]=val;return;}
        int mid=(low+high)>>1;
        if(ind<=mid)update(2*i+1,low,mid,ind,val);
        else update(2*i+2,mid+1,high,ind,val);
        seg[i]=seg[2*i+1]+seg[2*i+2];
    }
};
/*
int main()
{
    int n;cin>>n;
    vector<int>v(n),u(n);
    loop(i,0,n)cin>>v[i];

    sgt s1(n);
    s1.build(0,0,n-1,v);    
    int q;cin>>q;
    while(q--)
    {
        int type;cin>>type;
        if(type==1)
        {
            int a,b;cin>>a>>b;
            cout<<s1.query(0,0,n-1,a,b)<<nl;
           
        }
        else 
        {
            int i,val;cin>>i>>val;
            s1.update(0,0,n-1,i,val);
  
        }
    }
}
*/