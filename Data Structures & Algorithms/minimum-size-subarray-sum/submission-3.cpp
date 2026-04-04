class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int ans=INT_MAX;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                int len=j-i+1;
                ans=min(ans,len);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};