bool checkValidGrid(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return false ;
        int tourSize = grid.size() * grid.size();
        int r = 0, c = 0;
        int n = grid.size();
        for (int i = 1; i < tourSize; i++) {
            cout<<"i->"<<i<<" r->"<<r<<" c->"<<c<<endl;
            if ((r + 2 < n && c + 1 < n) && grid[r + 2][c + 1] == i) { //1
                r = r + 2;
                c = c + 1;
            } else if ((r - 1 >= 0 && c - 2 >= 0) && grid[r - 1][c - 2] == i) { //2
                r = r - 1;
                c = c - 2;
            } else if ((r - 2 >= 0 && c + 1 < n) && grid[r - 2][c + 1] == i) { //3
                r = r - 2;
                c = c + 1;
            } else if ((r - 1 >= 0 && c + 2 < n) && grid[r - 1][c + 2] == i) { //4
                r = r - 1;
                c = c + 2;
            } else if (((r + 2 < n && c - 1 >= 0) && grid[r + 2][c - 1] == i)) { //5
                r = r + 2;
                c = c - 1;
            } else if ((r - 2 >= 0 && c - 1 >= 0) && grid[r - 2][c - 1] == i) { //6
                r = r - 2;
                c = c - 1;
            } else if ((r + 1 < n && c + 2 < n) && grid[r + 1][c + 2] == i) { //7
                r = r + 1;
                c = c + 2;
            } else if ((r +1 <n  && c - 2 >= 0) && grid[r + 1][c - 2] == i) { //8
                r = r +1;
                c = c - 2;
            }else{
                return false;
            }
        }
        return true ;
    }