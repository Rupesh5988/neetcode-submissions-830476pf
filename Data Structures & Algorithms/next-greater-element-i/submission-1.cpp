class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>temp;
        for(int i=0;i<nums1.size();i++){
            temp[nums1[i]]=i;
        }
        vector<int>ans(nums1.size(),-1);
        stack<int> temp1;
        for(int a: nums2){
            while(!temp1.empty() && temp1.top()<a){
                int val=temp1.top(); temp1.pop();
                int index=temp[val];
                ans[index]=a;
            }
            if(temp.find(a)!=temp.end()) temp1.push(a);
        }
        return ans;
    }
};