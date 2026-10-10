class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(auto i : grid) {
            for(int j = 0; j < i.size(); j++) {
                if(i[j] < 0) cnt++;
            }
        }
        return cnt;
    }
};