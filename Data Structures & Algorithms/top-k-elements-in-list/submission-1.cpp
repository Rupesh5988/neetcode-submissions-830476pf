class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>temp;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_heap;
      for(auto pair: temp){
        min_heap.push({pair.second,pair.first});
        if(min_heap.size()>k) min_heap.pop();
      }
      vector<int>result;
      while(!min_heap.empty()){
        result.push_back(min_heap.top().second);
        min_heap.pop();
      }
      return result;
    }
};
