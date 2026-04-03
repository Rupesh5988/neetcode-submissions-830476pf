class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int>temp1(26,0);
        vector<int>temp2(26,0);
        for(int i=0;i<s1.length();i++){
            temp1[s1[i]-'a']++;
            temp2[s2[i]-'a']++;
        }
        if(temp1==temp2) return true;
        for(int j=s1.length();j<s2.length();j++){
            temp2[s2[j]-'a']++;
            temp2[s2[j-s1.length()]-'a']--;
            if(temp1==temp2) return true;
        }
        return false;


    }
};
