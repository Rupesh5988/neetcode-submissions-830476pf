class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>temp;
        int left=0,maxfreq=0,maxlength=0;
        for(int right=0;right<s.length();right++){
            temp[s[right]]++;
            maxfreq=max(maxfreq,temp[s[right]]);
            while(right-left+1-maxfreq>k){
                temp[s[left]]--;
                left++;
            }
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};
