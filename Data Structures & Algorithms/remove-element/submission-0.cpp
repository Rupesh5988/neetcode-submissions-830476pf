class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        int last=nums.size()-1;
        while(j<=last){
            if(nums[j]==val) { swap(nums[j],nums[last]); last--;}
            else {j++;}
        }
        return j;
    }
};