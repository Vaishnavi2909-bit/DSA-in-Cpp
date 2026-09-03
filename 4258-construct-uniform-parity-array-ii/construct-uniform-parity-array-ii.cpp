class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX;
        for(int i : nums1){
            mn = min(i, mn);
        }
        for(int i : nums1){
            if(i%2 == 1 && mn%2 == 0) return false;
        }
        return true;
    }
};