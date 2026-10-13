class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> sq;
        for(int i : nums) {
            sq.push_back(1LL * i * i);
        }
        sort(sq.begin(), sq.end());
        long long ans = 0;
        int x = n/2;
        for(int i = 0; i < x; i++) {
            ans -= sq[i];
        }
        for(int i = x; i < n; i++) {
            ans += sq[i];
        }
        return ans;
    }
};