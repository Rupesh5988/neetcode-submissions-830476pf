class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false};
        bool col[9][9]={false};
        bool square[9][9]={false};
        int i=0,j=0;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                
                char temp=board[i][j];
                if(temp=='.') continue;
                int k=(i/3)*3+j/3;

                if(row[i][temp-'1'] || col[j][temp-'1'] || square[k][temp-'1']) return false;
                else{
                    row[i][temp-'1']=true; 
                     col[j][temp-'1']=true;
                     square[k][temp-'1']=true;
                }
            }
        }
    return true;
    }
};
