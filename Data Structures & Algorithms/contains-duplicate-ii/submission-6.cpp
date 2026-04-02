class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==0 or nums.size()==1) return false;
        int i=0;
        bool check=false;
        while(i<nums.size()){
            int j=i+1;
            while(j<nums.size() && j<=i+k){
                if(nums[j]==nums[i]) { return true;}
                else {check=false; j++;}
                }
              
            
            i++;
        }
       return false;
    
    }
};