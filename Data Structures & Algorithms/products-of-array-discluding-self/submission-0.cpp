class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        int i=0,j=nums.size()-1;
        while(i<nums.size() or j>=0){
            if(i==0) left[i]=1;
            else left[i]=left[i-1]*nums[i-1];
            if(j==nums.size()-1) right[j]=1;
            else right[j]=right[j+1]*nums[j+1];
            i++;
            j--;
        }
        vector<int>ans;
        int k=0;
        while(k<nums.size()){
            ans.push_back(left[k]*right[k]);
            k++;
        }
        return ans;
    }
};
