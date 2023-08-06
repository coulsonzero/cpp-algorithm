/**
 * 6932. 子序列最大优雅度
 * @难度：困难
 * @link: https://leetcode.cn/problems/maximum-elegance-of-a-k-length-subsequence/description/
 * 输入：items = [[3,2],[5,1],[10,1]], k = 2
 * 输出：17
 * 解释：
 * 在这个例子中，我们需要选出长度为 2 的子序列。
 * 其中一种方案是 items[0] = [3,2] 和 items[2] = [10,1] 。
 * 子序列的总利润为 3 + 10 = 13 ，子序列包含 2 种不同类别 [2,1] 。
 * 因此，优雅度为 13 + 22 = 17 ，可以证明 17 是可以获得的最大优雅度。
 */

class Solution {
public:
    long long findMaximumElegance(vector<vector<int>> &items, int k) {
        sort(items.begin(), items.end(), [&](auto a, auto b) {
            return a[0] > b[0];
        });
        long long ans = 0, sum = 0;
        unordered_set<int> set;
        stack<int> st;
        for (int i = 0; i < items.size(); i++) {
            int profit = items[i][0], category = items[i][1];
            if (i < k) {
                sum += profit;
                // set.insert(e).second   判断是否插入成功(即是否存在该元素)
                if (!set.insert(category).second) st.push(profit);
            } else if (!st.empty() && set.insert(category).second) {
                sum += profit - st.top();
                st.pop();
            }
            int m = (long long)set.size();
            ans = max(ans, sum + m * m);
        }
        return ans;
    }
};
