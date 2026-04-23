class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp(numRows);
        for(int i=0;i<numRows;i++){
            if(i==0 or i==1){
                int j=0;
                while(j<=i){
                    temp[i].push_back(1);
                    j++;
                }
            }
           
            else{
                int j=0;
                while(j<=i){
                    if(j==i or j==0){temp[i].push_back(1);}
                    else {
                        temp[i].push_back(temp[i-1][j]+temp[i-1][j-1]);
                    }
                    j++;
                }
                
            }
        }
        return temp;
    }
};