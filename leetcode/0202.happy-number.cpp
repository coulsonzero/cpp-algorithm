/**
 * 202. Happy Number
 * Those numbers for which this process ends in 1 are happy.
 * Return true if n is a happy number, and false if not.
 *
 * Input: n = 19
 * Output: true
 * Explanation:
 * 12 + 92 = 82
 * 82 + 22 = 68
 * 62 + 82 = 100
 * 12 + 02 + 02 = 1
 */

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n != 1) {
            int sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            if (set.find(sum) != set.end()) break;
            set.insert(sum);
            n = sum;
        }
        return n == 1;
    }
};

