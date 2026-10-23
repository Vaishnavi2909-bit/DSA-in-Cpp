class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        bool found = true;
        while(found) {
            found = false;
            for(int num : nums) {
                if(original == num) {
                    original *= 2;
                    found = true;
                    break;
                }
            }
        }
        return original;
    }
};