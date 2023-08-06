

/********************************************************************
 * 2517. Maximum Tastiness of Candy Basket                          *
 * @Date: June 05 2023 (m-d-y)                                      *
 *                                                                  *
 * Example                                                          *
 * Input: price = [13,5,1,8,21,2], k = 3                            *
 * Output: 8                                                        *
 * Explanation: Choose the candies with the prices [13,5,21].       *
 * The tastiness of the candy basket is:                            *
 * min(|13 - 5|, |13 - 21|, |5 - 21|) = min(8, 8, 16) = 8.          *
 ********************************************************************/



class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        int n = price.size();
        int l = 0, r = price[n-1] - price[0];
        while (l <= r) {
            int m = (l + r + 1) / 2;
            int cnt = 1;
            int tar = price[0];
            while (cnt < k) {
                tar += m;
                auto it = lower_bound(price.begin(), price.end(), tar);
                if (it == price.end()) break;
                tar = *it;
                cnt++;
            }
            if (cnt == k) l = m + 1;
            else r = m - 1;
        }
        return r;
    }
};

