class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==0 or s.length()==1) return true;
        string temp="";
        int i=0,j=s.length();
        while(i<j){
            if((s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9') or (s[i]>='a' and s[i]<='z')){
                temp+=tolower(s[i]);
            }
            i++; 
        }
     
        i=0,j=temp.length()-1;
        while(i<=j){
            if(temp[i]!=temp[j]) return false;
            i++; j--;
        } 
        return true;

    }
};
