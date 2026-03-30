class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>k(nums.begin(),nums.end());
        int longest_seq=0;
        for(int i: k){
            if(k.find(i-1)==k.end()){
                int templen=1;
                int currno=i;
                while(k.find(currno+1)!=k.end()){
                    templen++;
                    currno++;
                }
                longest_seq=max(longest_seq,templen);
            }
        }
        return longest_seq;
    }
};
