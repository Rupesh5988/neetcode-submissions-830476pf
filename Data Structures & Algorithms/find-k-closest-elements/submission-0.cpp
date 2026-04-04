class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int lo=0,hi=arr.size()-1;
        int entrypoint=arr.size();
      while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>=x){  entrypoint=mid; hi=mid-1; }
        else lo=mid+1;
      }
    int right=entrypoint;
    int left=right-1;
    while(k>0){
        if(right>=arr.size()) left--;
        else if(left<0) right++;
       else  if(abs(arr[left]-x)<=abs(arr[right]-x)){
          left--;
        }
        else right++;
        k--;
    }
    return vector<int>(arr.begin()+left+1,arr.begin()+right);
    }

};