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
        for(auto& pair: temp){
            ans.push_back(pair.second);
        }
        return ans;
        
    }
};
