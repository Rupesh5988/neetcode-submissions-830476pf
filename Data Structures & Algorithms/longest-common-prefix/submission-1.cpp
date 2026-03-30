class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string compare=strs[0];
        for(int i=1;i<strs.size();i++){
            
            int j=0;
            int k=0;
            string temp=strs[i];
            while(j<compare.length() && k<temp.length()){
                if(compare[j]==temp[k]){j++; k++;}
                else break;
            }
            compare=compare.substr(0,j);
        }
        return compare;
    }
};