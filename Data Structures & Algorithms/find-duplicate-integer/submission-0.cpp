class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int idx=0,n=nums.size()-1;
        while(idx<=n){
            int ele=nums[idx];
            if(ele==idx+1) idx++;
            else{
                if(nums[ele-1]==ele) return ele;
                else{swap(nums[idx],nums[ele-1]);}
            }

        }
        return -1;
    }
};