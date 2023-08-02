class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        int a = 0, b = 1, sum = a + b;
        for (int i = 2; i < n; i++) {
            a = b;
            b = sum;
            sum = (a + b) % 1000000007;
        }
        return sum;
    }
};


// 递归超时，递归次数多计算量大.
class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;
        return fib(n - 1) + fib(n- 2);
    }
};
