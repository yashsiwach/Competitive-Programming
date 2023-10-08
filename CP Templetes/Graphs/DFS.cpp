void dfs(int src,unordered_map<int,bool>&visited)
    {
        cout<<src;
        visited[src]=true;
        for(auto nbr:adjlist[src])
        {
            if(!visited[nbr])
            {
                visited[nbr]=true;
                dfs(nbr,visited);

            }
        }
    }
//tested on no directed and non weight

// for(int i=0; i<n; i++) 
// {
//     if(!visited2[i]) {
//       g.dfs(i, visited2);
//     }
// }