class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        int left = 0, right = n-1;
        while(left <= right) {
            if(left == right) sum += nums[left];
            else {
                string s = to_string(nums[left]) + to_string(nums[right]);
                sum += stoi(s);
            }
            left++;
            right--;
        }
        return sum;
    }
};