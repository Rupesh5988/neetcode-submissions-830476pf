class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot=-1;
        int n=nums.size()-1;
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<=nums[n]) hi=mid;
            else lo=mid+1;
        }
        pivot=lo;
        
            if(nums[pivot]<=target && nums[n]>=target){
                lo=pivot;
                hi=n;
            }
        
        else {
            lo=0,hi=pivot-1;
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        return -1;
        
    }
};