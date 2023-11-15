void bfs(int firstnode, unordered_map<int, bool>& visited) 
    {
        queue<int> q;
        q.push(firstnode);
        visited[firstnode] = true;
        while (!q.empty()) 
        {
            int front = q.front();
            q.pop();
            cout << front << " ";
            for (auto neighbor : adjlist[front]) 
            {  
                if (!visited[neighbor])
                {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
//tested on no directed and non weight
    
// for(int i=0; i<n; i++) {
//     if(!visited[i]) {
//       g.bfs(i, visited);
//     }
//   }   