class Solution {
public:
    int arrangeCoins(int n) {
        int lo=0,hi=n;
        int ans=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            long long totalcoins=(long long)mid*(mid+1)/2;
            if(totalcoins>n) hi=mid-1;
            else{
                ans=mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};