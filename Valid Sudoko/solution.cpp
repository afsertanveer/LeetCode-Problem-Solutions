class Solution {
public:
    bool notClash(vector<vector<char>>& board, int n, int row, int col) {
        for (int i = 0; i < n; i++) {
            if (i!=row && board[i][col] == board[row][col] ) {
                return false;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i!=col && board[row][i] == board[row][col]) {
                return false;
            }
        }
        int sr = ((row) / 3) * 3, sc = ((col) / 3) * 3;
        for (int i = sr; i < sr + 3; i++) {
            for (int j = sc; j < sc + 3; j++) {
                if (i!=row && j!=col && board[i][j] == board[row][col]) {
                    return false;
                }
            }
        }
        return true;
    }
    bool solveboard(vector<vector<char>>& board, int n, int row, int col) {
        if (row == n) {
            return true;
        }
        int nextRow = row;
        int nextCol = col + 1;
        if (nextCol == 9) {
            nextRow = row + 1;
            nextCol = 0;
        }
        if (board[row][col] == '.') {
            return solveboard(board, n, nextRow, nextCol);
        }
        if (notClash(board, n, row, col)) {
            return solveboard(board, n, nextRow, nextCol);
        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        // for( int i = 0 ; i<n ; i++ ){
        //     for(int j = 0 ; j<n ; j++){
        //         cout<<board[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return solveboard(board, n, 0, 0);
    }
};