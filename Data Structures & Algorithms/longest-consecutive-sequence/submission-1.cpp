class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>temp_set(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int temp=1;
            int tempno=nums[i];
        while(temp_set.find(tempno+1)!=temp_set.end()){
            temp++;
            tempno++;
        }
        ans=max(ans,temp);
    }
    return ans;
    }
};
