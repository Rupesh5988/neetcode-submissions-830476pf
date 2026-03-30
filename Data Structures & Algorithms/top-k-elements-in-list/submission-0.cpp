class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>temp;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto pair: temp){
            bucket[pair.second].push_back(pair.first);
        }
        vector<int>result;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int nums: bucket[i]){
                if(result.size()<k){
                    result.push_back(nums);
                }
                else return result;
            }
        }
        return  result;
    }
};
