class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool is_negative = (dividend < 0) ^ (divisor < 0);
        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long quotient = 0;

        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;

            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            quotient += multiple;
        }

        if (is_negative) {
            return -quotient;
        }
        return quotient;
    }
};