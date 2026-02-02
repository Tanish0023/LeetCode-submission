class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n){
        // Checking the row
        int col2 = col;
        while(col2 >= 0){
            if(board[row][col2] == 'Q'){
                return false;
            }
            col2--;
        }

        // checking bottom diagonal
        int coltemp = col;
        int rowtemp = row;
        while(coltemp >= 0 && rowtemp >= 0){
            if(board[rowtemp][coltemp] == 'Q'){
                return false;
            }
            coltemp--;
            rowtemp--;
        }

        // Cheking diagonal
        int coltemp1 = col;
        int rowtemp1 = row;
        while(coltemp1 >= 0 && rowtemp1 < n){
            if(board[rowtemp1][coltemp1] == 'Q'){
                return false;
            }
            coltemp1--;
            rowtemp1++;
        }

        return true;
    }

    void rec(int col, vector<vector<string>>& ans, vector<string>& board, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                rec(col + 1, ans, board, n);
                board[row][col] = '.';
            }
        }   
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i < n; i++){
            board[i] = s;
        }   

        rec(0,ans ,board, n);

        return ans; 
    }
};