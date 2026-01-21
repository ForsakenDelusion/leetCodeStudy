// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=258 lang=cpp
 * @lcpr version=30204
 *
 * [258] 各位相加
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
  int addDigits(int num) {
    int tmp = num;

    while (tmp / 10 > 0) {
      vector<int> bit;

      bit.push_back(num % 10);
      num = num / 10;

      while (num != 0) {
        bit.push_back(num);
        num = num / 10;
      }
      int sum = 0;
      for (auto& it : bit) {
        sum += it;
      }
      tmp = sum;
      num = sum;
    }
    cout << tmp;
    return tmp;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 38\n
// @lcpr case=end

// @lcpr case=start
// 0\n
// @lcpr case=end

 */
