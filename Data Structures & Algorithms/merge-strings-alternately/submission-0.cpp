class Solution {
public:
    string mergeAlternately(string word1, string word2) {
          string ans="";
          int i=0;
          while(i<min(word1.length(),word2.length())){
            ans+=word1[i];
            ans+=word2[i];
            i++;
          }
          if(word1.length()>word2.length()){
            while(i<word1.length()){
                ans+=word1[i++];
            }
          }
          else if(word1.length()<word2.length()){
            while(i<word2.length()){
                ans+=word2[i++];
            }
          }
          return ans;

    }
};