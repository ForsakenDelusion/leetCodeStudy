/*
 * @lc app=leetcode.cn id=7 lang=cpp
 * @lcpr version=30204
 *
 * [7] 整数反转
 */


// @lcpr-template-start
#include <cmath>
#include <string>
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
    int reverse(int x) {
        //[-2147483648, 2147483647]
        int res = 0;
        while(x !=0){
            int tmp = x%10;
            if(res < INT_MIN / 10|| (res == INT_MIN / 10 && tmp > 7)){
                return 0;
            } else if(res > INT_MAX / 10|| (res == INT_MAX / 10 && tmp < -8)){
                return 0;
            }
            res = res *10 + tmp;
            x/=10;
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 123\n
// @lcpr case=end

// @lcpr case=start
// -123\n
// @lcpr case=end

// @lcpr case=start
// 120\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

 */

