int solve(vector<int>&v)
{
    int ans=0;
    for(auto i:v)
    {
        ans=ans^i;
    }
    return ans;
}