class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }

        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
    else reverse(nums.begin()+pivot+1,nums.end());
    for(int i=pivot+1;i<nums.size();i++){
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
            break;
        }
    }

    }
};