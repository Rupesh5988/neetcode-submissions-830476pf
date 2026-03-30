class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(nums.size()*2);
        int j=0;
        while(j<nums.size()*2){

            if(j<nums.size())ans[j]=nums[j];
            else ans[j]=nums[j%nums.size()];
            j++;
        }
        return ans;
    }
};