class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;   // get last digit
            product *= digit;
            sum += digit;
            n /= 10;             // remove last digit
        }

        return product - sum;
    }
};
