class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        stack<int>temp;
        vector<int>ngi(nums.size());
        int n=nums.size();
        int i=n-1;
        ngi[i]=n;
        temp.push(i--);
        while(i>=0){
            while(!temp.empty() && nums[i]>nums[temp.top()]){
                temp.pop();
            }
            if(temp.empty()) ngi[i]=n;
            else ngi[i]=temp.top();
            temp.push(i);
            i--;
        }
        vector<int>ans;
        for(int i=0;i<=n-k;i++){
            int j=i;
         int maxele=nums[i];
;            while(ngi[j]<i+k){
             
                j=ngi[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
