while (!q.empty()) {
        pair<int, int> fr = q.front();
        q.pop();
        int row = fr.first;
        int col = fr.second;
//important
        for (int nrow = -1; nrow <= 1; nrow++) {
            for (int ncol = -1; ncol <= 1; ncol++) {
                int ngbrow = row + nrow;
                int ngbcol = col + ncol;
                if (ngbrow >= 0 && ngbrow < n && ngbcol >= 0 && ngbcol < m && grid[ngbrow][ngbcol] == '1') {
                    if (!visi[ngbrow][ngbcol]) {
                        visi[ngbrow][ngbcol] = true;
                        q.push({ngbrow, ngbcol});
                    }
                }
            }
        }
    }