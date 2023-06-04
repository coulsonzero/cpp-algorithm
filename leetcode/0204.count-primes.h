#ifndef COUNT_PRIMES_H
#define COUNT_PRIMES_H

#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n, 1);
        for(int i = 2; i*i <= n; i++) {
            if (prime[i]) {
                for (int j = i*i; j < n; j+=i) {
                    prime[j] = 0;
                }
            }
        }
        for (auto v : prime) {
            if(v) count++;
        }
        return count > 2 ? count - 2 : 0;
    }
};

#endif //COUNT_PRIMES_H
