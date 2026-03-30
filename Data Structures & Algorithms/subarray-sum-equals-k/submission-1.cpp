class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefixSum;
        prefixSum[0]=1;
        int ans=0;
        int currSum=0;
        for(int num: nums){
            currSum+=num;
            int diff=currSum-k;
            if(prefixSum.find(diff)!=prefixSum.end()){
                ans+=prefixSum[diff];
            }
            prefixSum[currSum]++;
        }
        return ans;
    }
};