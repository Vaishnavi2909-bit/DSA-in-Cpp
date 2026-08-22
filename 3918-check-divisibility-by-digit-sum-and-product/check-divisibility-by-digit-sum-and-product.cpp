class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1;
        int org = n;
        while(org!=0){
            int digit = org % 10;
            sum+=digit;
            product*=digit;
            org/=10;
        }
        return n % (sum+product) == 0;
    }
};