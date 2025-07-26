/*
 * @lc app=leetcode.cn id=1281 lang=cpp
 * @lcpr version=30204
 *
 * [1281] 整数的各位积和之差
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n > 0){
            int digital = n%10;
            product *= digital;
            sum += digital;
            n /= 10;
        }

        return product - sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 234\n
// @lcpr case=end

// @lcpr case=start
// 4421\n
// @lcpr case=end

 */

