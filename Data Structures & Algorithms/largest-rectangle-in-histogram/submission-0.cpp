class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>nsi;
        int n=heights.size();
        int nsians=n-1;
        vector<int>nsiv(n);
        nsiv[nsians]=n;
        nsi.push(nsians);
        nsians--;
        while(nsians>=0){
            while(!nsi.empty() && heights[nsians]<=heights[nsi.top()]){
                nsi.pop();
            }
            if(!nsi.empty()) nsiv[nsians]=nsi.top();
            else nsiv[nsians]=n;
            nsi.push(nsians);
            nsians--;
        }
        stack<int>psi;
        int psians=1;
        vector<int>psiv(n);
        psiv[0]=-1;
        psi.push(0);
        while(psians<n){
            while(!psi.empty() && heights[psians]<=heights[psi.top()]){
                psi.pop();
            }
            if(!psi.empty()) psiv[psians]=psi.top();
            else psiv[psians]=-1;
            psi.push(psians);
            psians++;
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int area=heights[i]*(nsiv[i]-psiv[i]-1);
            ans=max(area,ans);
        }
        return ans;
    }
};
