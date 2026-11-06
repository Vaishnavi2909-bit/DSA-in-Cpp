class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1, sum = 0;
        for(int i = 0; i < s.size(); i++) {
            int w = widths[s[i] - 'a'];
            if(sum + w > 100) {
                lines++;
                sum = w;
            }
            else sum += w;
        }
        return {lines, sum};
    }
};