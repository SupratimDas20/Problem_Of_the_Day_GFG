class Solution {
public:
    long long mod = 1e9+7;
    long long powerexpo(long long a, long long n) {
        long long res = 1LL;
        while (n) {
            if (n & 1) {
                res = (res % mod * a % mod) % mod;
                --n;
            } else {
                a = (a % mod * a % mod) % mod;
                n >>= 1;
            }
        }
        return res;
    }

    long long power(int N, int R) {
        return powerexpo(N, R);
    }
};
