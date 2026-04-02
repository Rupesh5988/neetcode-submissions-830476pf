class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char  >temp;
        int maxlength=0;
        int left=0;
        for(int i=0;i<s.length();i++){
            if(temp.count(s[i])){while(temp.count(s[i])){temp.erase(s[left]); left++;}}
            temp.insert(s[i]);
            maxlength=max(maxlength,i-left+1);
        }
        return maxlength;
    }
};
