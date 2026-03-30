class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lo=0,hi=heights.size()-1;
        int area=0;
        while(lo<hi){
            int temparea=(hi-lo)*min(heights[lo],heights[hi]);
            area=max(temparea,area);
            if(heights[lo]<heights[hi]) lo++;
            else hi--;
        }
        return area;
    }
};
