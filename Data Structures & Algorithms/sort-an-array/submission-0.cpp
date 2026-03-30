class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>min_heap;
        for(int i: nums){
            min_heap.push(i);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=min_heap.top();
            min_heap.pop();
        }
        return nums;
    }
};