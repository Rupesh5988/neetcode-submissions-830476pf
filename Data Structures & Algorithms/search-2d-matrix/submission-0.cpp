class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int maxcol=matrix[0].size()-1;
          int maxrow=matrix.size();
          int i=0;
          int j=maxcol;
          while(j>=0 && i<maxrow){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]<target){i++;}
            else j--;
          }
          return false;

    }
};
