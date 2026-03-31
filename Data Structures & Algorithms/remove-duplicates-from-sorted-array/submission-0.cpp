class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lo=0,hi=1;
        int ans=0;
        if(nums.size()==0) return 0;
        else if(nums.size()==1) return 1;
        else{
            while(hi<nums.size()){
                int temp=nums[lo];
                ans++;
                while(hi<nums.size() && temp==nums[hi]) hi++;
                if(hi<=nums.size()-1){ nums[lo+1]=nums[hi];
                lo++;
                hi++;}
            }
        }
        return lo+1;
    }
};