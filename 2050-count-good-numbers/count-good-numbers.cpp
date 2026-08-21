class Solution {
public:
    int countGoodNumbers(long long n) {
        long long MOD = 1e9 + 7;
        long long even = 5;
        long long odd = 4;
        long long even_count = (n + 1) / 2;
        long long odd_count = n / 2;
        long long ans = 1;

        while (even_count > 0) {
            if (even_count % 2 == 1) {
                ans = (ans * even) % MOD;
            }
            even = (even * even) % MOD;
            even_count /= 2;
        }

        while (odd_count > 0) {
            if (odd_count % 2 == 1) {
                ans = (ans * odd) % MOD;
            }
            odd = (odd * odd) % MOD;
            odd_count /= 2;
        }

        return ans;
    }
};