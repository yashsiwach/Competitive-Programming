bool solve(vector<int>adj[],vector<bool>visi,int node)
  {
      queue<pair<int,int>>q;
      q.push({node,-1});
      visi[node]=true;
      while(!q.empty())
      {
          int node=q.front().first;
          int parent=q.front().second;
          q.pop();
          for(auto nbr:adj[node])
          {
              if(!visi[nbr])
              {
                  visi[node]=true;
                  q.push({nbr,node});
              }
              else if(parent!=nbr)
              {
                  return true;
              }
          }
      }return false;
      //code is of cycle detection