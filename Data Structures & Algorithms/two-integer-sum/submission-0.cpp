class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>temp;
        
        for(int i=0;i<nums.size();i++){
            
             if(temp.find(nums[i])!=temp.end()) return {temp[nums[i]],i};
            else {temp[target-nums[i]]=i; }
        }
        return{-1,-1};
    }
};
