// leetcode problem - 1808. Maximize Number of Nice Divisors
class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp, int mod) {
        long long res = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1)
                res = (res * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }
    
    int maxNiceDivisors(int primeFactors) {
        if (primeFactors <= 3) return primeFactors;
        
        if (primeFactors % 3 == 0) {
            return modPow(3, primeFactors / 3, MOD);
        } else if (primeFactors % 3 == 1) {
            return (modPow(3, (primeFactors / 3) - 1, MOD) * 4) % MOD;
        } else { 
            return (modPow(3, primeFactors / 3, MOD) * 2) % MOD;
        }
    }
};