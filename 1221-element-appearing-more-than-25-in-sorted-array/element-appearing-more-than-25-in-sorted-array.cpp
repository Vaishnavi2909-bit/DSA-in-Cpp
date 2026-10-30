class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        float n = arr.size()/4;
        unordered_map<int, int> freq;
        for(int i : arr) {
            freq[i]++;
            if(freq[i] > n) return i;
        }
        return -1;
    }
};