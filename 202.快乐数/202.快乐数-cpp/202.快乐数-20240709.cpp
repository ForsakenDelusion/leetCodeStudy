// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=202 lang=cpp
 * @lcpr version=30204
 *
 * [202] 快乐数
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
  bool isHappy(int n) {
    unordered_set<int> checkSet;
    int sum = 0;
    while (checkSet.find(sum) == checkSet.end()) {
      checkSet.insert(sum);
      sum = 0;
      while (n) {
        sum = sum + (n % 10) * (n % 10);
        n /= 10;
      }
      if (sum == 1) {
        return true;
      } else {
        n = sum;
      }
    }
    return false;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 19\n
// @lcpr case=end

// @lcpr case=start
// 2\n
// @lcpr case=end

 */
