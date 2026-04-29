class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size()-1;
        vector<int>ans;
if(x>arr[n]){
    int temp=n;
for(int i=0;i<k;i++){
ans.push_back(arr[temp--]);

}
reverse(ans.begin(),ans.end());
return ans;
}
else if(x<arr[0]){
    int temp=0;
    for(int i=0;i<k;i++){
        ans.push_back(arr[temp++]);
    }
    
    return ans;
}
else{
    int lo=0,hi=arr.size()-1;
    bool present=false;
    int tempidx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            present=true;
            tempidx=mid;
            break;
        }
        else if(arr[mid]>x)hi=mid-1;
        else lo=mid+1;
    }
    int upperbound,lowerbound;
    if(present) {upperbound=tempidx; lowerbound=tempidx-1;}
    else{
        upperbound=lo;lowerbound=hi;
    }
    while(k>0){
        if(upperbound>n) lowerbound--;
        else if(lowerbound<0) upperbound++;
        else if(abs(arr[upperbound]-x)>=abs(arr[lowerbound]-x)){
            lowerbound--;
        }
        else upperbound++;
        k--;
    }
    return vector<int>(arr.begin()+lowerbound+1,arr.begin()+upperbound);
}
return ans;
    }
};