class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int currprice=0;
        int currprofit=0;
        int maxprofit=0;
        for(int i=0;i<nums.size();i++){
            if(i==0) currprice=nums[i];
            else{
            currprofit=nums[i]-currprice;
            if(currprofit>maxprofit) maxprofit=currprofit;
             if(currprice>nums[i]) currprice=nums[i];
        }}
        return maxprofit;
    }
};
