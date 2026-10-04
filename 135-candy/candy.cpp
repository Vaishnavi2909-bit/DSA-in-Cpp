class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();  
        int i = 1, sum = 1;
        while(i < n) {
            if(ratings[i] == ratings[i-1]) {
                sum++;
                i++;
            }
            int peak = 1;
            while(i < n && ratings[i] > ratings[i-1]) {
                peak++;
                i++;
                sum += peak;
            }
            int down = 0;
            while(i < n && ratings[i] < ratings[i-1]) {
                down++;
                i++;
                sum += down;
            }
            down++;
            if(down > peak) sum += down-peak;
        }
        return sum;
    }
};