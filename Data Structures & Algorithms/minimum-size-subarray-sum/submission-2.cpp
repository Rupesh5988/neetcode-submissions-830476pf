class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int ans=INT_MAX;
      for(int i=0;i<nums.size();i++){
        int temp=0;
        int j=i;
        while(j<nums.size()){
            if(temp+nums[j]>=target) {ans=min(ans,j-i+1); break;}
            else temp+=nums[j];j++;
        }
      }  
      if(ans==INT_MAX) return 0;
      return ans;
    }
};