class sgt{
public:
    vector<int>seg,lazy;
    sgt(int n)
    {
        seg.resize(4*n+1);
        lazy.resize(4*n+1);
    }
    void build(int i,int low,int high,vector<int>&v)
    {
        if(low==high){seg[i]=v[low];return;}
        int mid=(low+high)>>1;
        build(2*i+1,low,mid,v);
        build(2*i+2,mid+1,high,v);
        seg[i]=seg[2*i+1]+seg[2*i+2];
    }
    int query(int i,int low,int high ,int l,int r)
    {
        if(lazy[i]!=0)
        {
            seg[i]+=(high-low+1)*lazy[i];
            if(low!=high)
            {
                lazy[2*i+1]+=lazy[i];
                lazy[2*i+2]+=lazy[i];
            }
            lazy[i]=0;
        }
        if(high<=r&&l<=low)return seg[i];
        if(high<l||low>r)return 0;
        int mid=(low+high)>>1;
        int left=query(2*i+1,low,mid,l,r);
        int right=query(2*i+2,mid+1,high,l,r);
        return left+right;
    }
    void update(int i,int low ,int high,int l,int r,int val)
    {
        if(lazy[i]!=0)
        {
            seg[i]+=(high-low+1)*lazy[i];
            if(low!=high)
            {
                lazy[2*i+1]+=lazy[i];
                lazy[2*i+2]+=lazy[i];
            }
            lazy[i]=0;
        }
        if(l>high||r<low)return ;
        if(low>=l&&high<=r)
        {
            seg[i]+=(high-low+1)*val;
            if(high!=low)
            {
                lazy[2*i+1]+=val;
                lazy[2*i+2]+=val;
            }
            return ;
        }
        int mid=(low+high)>>1;
        update(2*i+1,low,mid,l,r,val);
        update(2*i+2,mid+1,high,l,r,val);
        seg[i]=seg[2*i+1]+seg[2*i+2];
    }
};
// int main()
// {
   
//     int n;cin>>n;
//     vector<int>v(n);
//     loop(i,0,n)cin>>v[i];
//     sgt s1(n);

//     s1.build(0,0,n-1,v);
//     int q;cin>>q;
//     while(q--)
//     {
//         int type;cin>>type;
//         if(type==1)
//         {
//             int l,r;cin>>l>>r;cout<<s1.query(0,0,n-1,l,r)<<nl;
//         }
//         else
//         {
//             int  l,r,val;cin>>l>>r>>val;s1.update(0,0,n-1,l,r,val);
//         }
//     }
// }


//to update the given range with the val;