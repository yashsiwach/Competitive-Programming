void setbit(int num,int i)
{
    //mask it and do OR 
    int mask=1<<i;
    int ans=mask|num;
    cout<<ans<<endl;

}


void clearbit(int num,int i)
{
    //mask it and do compliment of mask and & it ( not &0 beacause it will make all the ans 0)
    int mask =~(1<<i);
    int ans=num&mask;
    cout<<ans<<endl;

}

//if decide to set or clear on runtime then 
//1.clear the ith bit and OR it with 0/1(given)
void solve(int &num ,int i,0/1)
{
    //num=num&mask modify in above fun
    clearbit(num,i);
    int ans=num|(0/1);
    cout<<ans<<endl; 
}