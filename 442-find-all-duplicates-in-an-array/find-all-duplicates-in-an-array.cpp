class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int i = 0;
        while(i < n) {
            int ind = nums[i]-1;
            if(nums[i] != nums[ind]) swap(nums[i], nums[ind]);
            else i++;
        }
        for(int j = 0; j < n; j++) {
            if(nums[j] != j+1) ans.push_back(nums[j]);
        }
        return ans;
    }
};