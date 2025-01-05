class Solution {
public:
    bool notClash(vector<vector<char>>& board, int n, int row, int col,
                  char ch) {
        for (int i = 0; i < n; i++) {
            if (board[i][col] == ch)
                return false;
        }

        for (int i = 0; i < n; i++) {
            if (board[row][i] == ch)
                return false;
        }
        int sr = ((row) / 3) * 3, sc = ((col) / 3) * 3;
        for (int i = sr; i < sr + 3; i++) {
            for (int j = sc; j < sc + 3; j++) {
                if (board[i][j] == ch) {
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
        int nextCol = col+1 ;
        if(nextCol==9){
            nextRow = row+1;
            nextCol = 0;
        }
        if(board[row][col]!='.'){
           return solveboard(board,n,nextRow,nextCol);
        }
        for (char ch = '1'; ch <= '9'; ch++) {
            if (notClash(board, n, row, col, ch)) {
                    board[row][col] = ch;
                    if (solveboard(board, n, nextRow, nextCol)) {
                        return true ;
                    }
                        board[row][col] = '.';
                }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size();
        solveboard(board, n, 0, 0);
    }
};