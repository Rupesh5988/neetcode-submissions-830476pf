class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size()-1;
        int maxele=-1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(maxele<weights[i]) maxele=weights[i];
            sum+=weights[i];
        }
        int lo=maxele;
        int hi=sum;
        int ans=sum;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int currsum=0;
            int idx=0;
            int currdays=1;
            while(idx<=n){
                if(weights[idx]+currsum<=mid){
                    currsum+=weights[idx++];
                }
                else{
                    currdays++;
                    currsum=0;
                } 
            }

            if(currdays<=days) {ans=mid; hi=mid-1;}
            else lo=mid+1;
        }
        return ans;
    }
};