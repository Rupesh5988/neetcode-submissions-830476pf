class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>temp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
           
        }
        for(auto pair: temp){
            if(pair.second>nums.size()/3) ans.push_back(pair.first);
        }
        return ans;
    }
};