class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>temp;
        for(int a : nums){
            temp.insert(a);
        }
        int i=0;
        while(i<=nums.size()){
            if(temp.find(i)!=temp.end()) i++;
            else return i;
        }
    return i;
    }
};
