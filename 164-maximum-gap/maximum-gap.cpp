class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return 0;
        sort(nums.begin(), nums.end());
        int maxi = 0;
        int i = 0;
        for(int j = i+1; j < n; j++) {
            maxi = max(maxi, nums[j]- nums[i]);
            i++;
        }
        return maxi;
    }
};