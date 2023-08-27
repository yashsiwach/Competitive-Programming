void solve(string s)
{
    vector<string>ans;
    int n=s.length();
    for(int num=0;num<(1<<n);num++)
    {
        string temp="";
        for(int i=0;i<n;i++)
        {
            char ch=str[i];
            if(num&(1<<i))
            {
                temp.push_back(ch);
            }
        }
        if(temp.length()>=0)
        {
            ans.push_back(temp);
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}