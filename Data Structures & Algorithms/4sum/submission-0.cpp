class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            long long rem = (long long)target - nums[i];

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                long long rem2 = rem - nums[j];

                int lo = j + 1, hi = n - 1;
                while (lo < hi) {
                    long long sum = (long long)nums[lo] + nums[hi];

                    if (sum == rem2) {
                        ans.push_back({nums[i], nums[j], nums[lo], nums[hi]});
                        lo++;
                        hi--;
                        while (lo < hi && nums[lo] == nums[lo - 1]) lo++;
                        while (lo < hi && nums[hi] == nums[hi + 1]) hi--;
                    } 
                    else if (sum > rem2) {
                        hi--;
                    } 
                    else {
                        lo++;
                    }
                }
            }
        }
        return ans;
    }
};