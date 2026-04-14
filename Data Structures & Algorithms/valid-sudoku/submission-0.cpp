class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9),col(9),box(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                char num=board[r][c];
                int boxindex=(r/3)*3+(c/3);
                if(row[r].count(num)||col[c].count(num)||box[boxindex].count(num)){
                    return false;
                }
                row[r].insert(num);
                col[c].insert(num);
                box[boxindex].insert(num);
            }
        }
        return true;
    }
};
