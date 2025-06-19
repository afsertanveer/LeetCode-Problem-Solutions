class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2) {
                    visited[i][j] = 2;
                    q.push({{i, j}, 0});
                }
            }
        }
        int t = 0;
        while (!q.empty()) {
            auto front = q.front();
            q.pop();
            int row = front.first.first;
            int col = front.first.second;
            t = front.second;
            if ((row - 1 >= 0) && grid[row - 1][col] == 1) {
                grid[row - 1][col] = 2;
                visited[row - 1][col] = 2;
                q.push({{row - 1, col}, t + 1});
            }
            if ((row + 1 < rows) && grid[row + 1][col] == 1) {
                grid[row + 1][col] = 2;
                visited[row + 1][col] = 2;
                q.push({{row + 1, col}, t + 1});
            }
            if ((col + 1 < cols) && grid[row][col + 1] == 1) {
                grid[row][col + 1] = 2;
                visited[row][col + 1] = 2;
                q.push({{row, col + 1}, t + 1});
            }
            if ((col - 1 >= 0) && grid[row][col - 1] == 1) {
                grid[row][col - 1] = 2;
                visited[row][col - 1] = 2;
                q.push({{row, col - 1}, t + 1});
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return t;
    }
};