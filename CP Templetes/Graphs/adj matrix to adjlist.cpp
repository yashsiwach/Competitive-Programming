vector<vector<int>> toadjlist(vector<vector<int>>&adj)
{
    int n=adj.size();
    vector<vector<int>>adjlist(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(adj[i][j]==1)
            {
                adjlist[i].push_back(j);
                adjlist[j].push_back(i);
            }
        }
    }
    return adjlist;
}