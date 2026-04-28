class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=-1;
        int n=nums.size()-1;
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
           if(nums[mid]>nums[hi]) lo=mid+1;
           else hi=mid;
        }
        idx=lo;
        lo=0,hi=nums.size()-1;

        if(idx!=-1){
            if(nums[idx]<=target && nums[hi]>=target){
            lo=idx;
        }
        else hi=idx-1;}
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        return -1;
    }
};