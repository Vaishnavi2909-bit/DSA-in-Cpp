class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int x : nums) {
            sum += x;
        }
        int leftSum = 0;
        for(int i = 0; i < n; i++) {
            int rightSum = sum - leftSum - nums[i];
            if(leftSum == rightSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};