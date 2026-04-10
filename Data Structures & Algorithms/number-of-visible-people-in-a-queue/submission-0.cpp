class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int>ans(heights.size());
        int i=heights.size()-1;
        ans[i]=0;
        stack<int>temp;
        temp.push(heights[i--]);
        while(i>=0){
            int count=0;
            while(!temp.empty() && temp.top()<heights[i]){
                count++;
                temp.pop();
            }
            if(!temp.empty())count++;
            ans[i]=count;
            temp.push(heights[i--]);
        }
        return ans;
        

    }
};