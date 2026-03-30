class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>temp;
        for(int a : nums){
            if(temp.find(a)!=temp.end()){
                return true;
            }
            temp.insert(a);
        }
        return false;
    }
};