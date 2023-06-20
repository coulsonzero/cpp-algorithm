#ifndef CPP_ALGORITHM_0050_POW_X_N_H
#define CPP_ALGORITHM_0050_POW_X_N_H


/**********************************************
 * 50. Pow(x, n)                              *
 * @Date: 06-05-2023 (m-d-y)                  *
 *                                            *
 * Example                                    *
 * Input: x = 2.00000, n = 10                 *
 * Output: 1024.00000                         *
 **********************************************/



class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        for (int i = n; i != 0; i /= 2) {
            if (i % 2 != 0) res *= x;
            x *= x;
        }
        return n < 0 ? 1 / res : res;
    }
};

#endif //CPP_ALGORITHM_0050_POW_X_N_H
