class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long lo=1;
        long long n=piles.size();
        long long  hi=-1;
        for(auto a: piles){
            if(a>hi) hi=a;
        }
        long long ans=0;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long currdays=0;
       
            int idx=0;
            while(idx<n){
                if(piles[idx]<mid){
                    currdays++;
                    idx++;
                }
                else if(piles[idx]>=mid){
                    long long count=piles[idx]/mid;
                    currdays+=count;
                    if(piles[idx]%mid!=0){
                        currdays++;
                    }
                    idx++;
                }
            }
            if(currdays<=h){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};