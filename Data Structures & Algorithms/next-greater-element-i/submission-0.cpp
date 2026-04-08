class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int temp=nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(temp==nums2[j]){
                    int temp1=-1;
                    for(int k=j+1;k<nums2.size();k++){
                        if(temp<nums2[k]){temp1=nums2[k]; break;}
                    }
                    ans.push_back(temp1);
                }
                
            }
        }
        return ans;
    }
};