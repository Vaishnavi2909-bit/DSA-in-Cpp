class Solution {
public:
    int countParts(vector<int>& nums, int maxSum) {
        int parts = 1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(sum + nums[i] > maxSum){
                parts++;
                sum = nums[i];
            }
            else sum += nums[i];
        }
        return parts;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        while(low <= high){
            long long mid = low + (high - low) / 2;
            int parts = countParts(nums, mid);
            if(parts <= k){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low;
    }
};