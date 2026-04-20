class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int lorow=0,hirow=matrix.size()-1,locol=0,hicol=matrix[0].size()-1;
        while(lorow<=hirow && locol<=hicol){
            int j=locol;
            while(j<=hicol){
                ans.push_back(matrix[lorow][j++]);
            }
            lorow++;
            j=lorow;
            if(lorow>hirow or locol>hicol) break;
            while(j<=hirow){
                ans.push_back(matrix[j++][hicol]);
            }
            hicol--;
            j=hicol;
            if(lorow>hirow or locol>hicol) break;
            while(j>=locol){
                ans.push_back(matrix[hirow][j--]);
            }
            hirow--;
            j=hirow;
            if(lorow>hirow or locol>hicol) break;
            while(j>=lorow){
                ans.push_back(matrix[j--][locol]);
            }
            locol++;
        }
        return ans;
    }
};
