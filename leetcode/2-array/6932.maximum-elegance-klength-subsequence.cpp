#include "lib_vector.h"
#include <unordered_map>
#include <unordered_set>
#include <stack>

using namespace std;
using co::vec;


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
                if (!set.insert(category).second) st.push(profit);
            } else if (!st.empty() && set.insert(category).second) {
                sum += profit - st.top();
                st.pop();
            }
            ans = max(ans, sum + (long long) set.size() * (long long) set.size());
        }
        return ans;
    }



};


int main() {
    auto ptr = new Solution();
    vector<vector<int>> items = {{3,2},{5,1},{10,1}};
    int k = 2;
    cout << ptr->findMaximumElegance(items, k);

    return 0;
}