class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int arr[limit+1]={0};
        int ans=0;
        for(int i: people) arr[i]++;
        int lo=0,hi=limit;
            while(lo<=hi){
            while(lo<=hi && arr[lo]==0) lo++;
            while(lo<=hi && arr[hi]==0) hi--;
            if(lo>hi) break;
             arr[hi]--;
             ans++;
            if(lo+hi<=limit && arr[lo]>0){arr[lo]--; }

            }
        return ans;
    }
};