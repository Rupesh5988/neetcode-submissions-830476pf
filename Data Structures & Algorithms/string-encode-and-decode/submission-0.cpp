class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str;
        for(string s: strs){
           
            encoded_str+=to_string(s.length())+"#"+s;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>ans;
        while(i<s.length()){
           int j=s.find('#',i);
           int len=stoi(s.substr(i,j-i));
            i=j+1;
            ans.push_back(s.substr(i,len));
            i+=len;
        }
        return ans;
    }
};
