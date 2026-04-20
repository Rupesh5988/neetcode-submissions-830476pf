class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) return ans;

        int lorow = 0, hirow = matrix.size() - 1;
        int locol = 0, hicol = matrix[0].size() - 1;

        while (lorow <= hirow && locol <= hicol) {
            for (int j = locol; j <= hicol; ++j) {
                ans.push_back(matrix[lorow][j]);
            }
            lorow++;

            for (int i = lorow; i <= hirow; ++i) {
                ans.push_back(matrix[i][hicol]);
            }
            hicol--;

            if (lorow <= hirow) {
                for (int j = hicol; j >= locol; --j) {
                    ans.push_back(matrix[hirow][j]);
                }
                hirow--;
            }

            if (locol <= hicol) {
                for (int i = hirow; i >= lorow; --i) {
                    ans.push_back(matrix[i][locol]);
                }
                locol++;
            }
        }
        return ans;
    }
};