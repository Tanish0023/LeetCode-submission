class Solution {
public:
    bool dfs(int r, int c,
             vector<vector<char>>& board,
             string &word,
             int idx) {

        if (idx == word.length())
            return true;

        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size())
            return false;

        if (board[r][c] != word[idx])
            return false;

        char temp = board[r][c];
        board[r][c] = '#';

        bool found =
            dfs(r+1, c, board, word, idx+1) ||
            dfs(r-1, c, board, word, idx+1) ||
            dfs(r, c+1, board, word, idx+1) ||
            dfs(r, c-1, board, word, idx+1);

        board[r][c] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(dfs(i, j, board, word, 0))
                    return true;
            }
        }
        return false;
    }
};
