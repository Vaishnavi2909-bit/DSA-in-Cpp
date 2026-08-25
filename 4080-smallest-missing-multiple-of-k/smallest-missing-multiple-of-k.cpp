class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int product = k;
        while(find(nums.begin(), nums.end(), product) != nums.end()){
            product+=k;
        }
        return product;
    }
};