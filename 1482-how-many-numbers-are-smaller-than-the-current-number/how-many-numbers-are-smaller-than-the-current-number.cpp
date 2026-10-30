class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(mp.find(temp[i]) == mp.end()) mp[temp[i]] = i;
        }
        for(int i : nums) {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};