class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalsum=(nums.size()*(nums.size()+1))/2;
        int tempsum=0;
        for(int a: nums){
            tempsum+=a;
        }
        int rem=abs(totalsum-tempsum);
      
         return rem;
    }
};
