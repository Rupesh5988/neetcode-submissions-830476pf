class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int ro=matrix.size(),col=matrix[0].size();
        vector<vector<int>>arr(col,vector<int>(ro));
        for(int i=0;i<col;i++){
            for(int j=0;j<ro;j++){
                arr[i][j]=matrix[j][i];
            }
        }
        return arr;
    }
};