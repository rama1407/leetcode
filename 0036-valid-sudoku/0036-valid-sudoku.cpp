class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++){
            unordered_map<int,int> mp;
            for(int j = 0;j<9;j++){
                if(board[i][j]!='.') mp[board[i][j]-'0']++;
            }
            for(int k = 1;k<10;k++){
                if(mp[k]>1) return false;
            }
        }
        for(int i = 0;i<9;i++){
            unordered_map<int,int> mp;
            for(int j = 0;j<9;j++){
                if(board[j][i]!='.') mp[board[j][i]-'0']++;
            }
            for(int k = 1;k<10;k++){
                if(mp[k]>1) return false;
            }
        }
        for(int row = 0;row <9;row+=3){
            for(int col = 0;col <9;col+=3){
                unordered_map<int,int> mp;
                for(int i = row;i<row+3;i++){
                    for(int j = col;j<col+3;j++){
                       if(board[i][j]!='.') mp[board[i][j]-'0']++;
                    }
                }
                for(int k = 1;k<=9;k++) if(mp[k]>1) return false;
            }
        }
        return true;
    }
};