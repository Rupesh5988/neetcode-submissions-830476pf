class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>temp;
        for(int i=0;i<strs.size();i++){
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            temp[s1].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto pair: temp){
            vector<string>temp1;
            for(string s: pair.second){
                temp1.push_back(s);
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};
