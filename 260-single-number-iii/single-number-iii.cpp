class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr = 0;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i< n; i++) {
            xorr = xorr ^ nums[i];
        }
        long long rightmost = xorr & (-xorr);
        int b1 = 0, b2 = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] & rightmost) b1 ^= nums[i];
            else b2 ^= nums[i];
        }
        return {b1, b2};
    }
};