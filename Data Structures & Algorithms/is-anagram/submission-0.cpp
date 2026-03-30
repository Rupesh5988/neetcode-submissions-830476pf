class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>temp;
        for(int i=0;i<s.length();i++){
            temp[s[i]]++;
            }
        for(int i=0;i<t.length();i++){
            if(temp.find(t[i])!=temp.end()){
                if(temp[t[i]]>1){
                    temp[t[i]]--;
                }
                else{
                    temp.erase(t[i]);
                }
            }
            else return false;

        }
        return true;
            
        
    }
};
