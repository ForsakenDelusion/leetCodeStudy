/*
 * @lc app=leetcode.cn id=13 lang=cpp
 * @lcpr version=30204
 *
 * [13] 罗马数字转整数
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
  int val(char c) {
    switch (c) {
      case 'I':
        return 1;
      case 'V':
        return 5;
      case 'X':
        return 10;
      case 'L':
        return 50;
      case 'C':
        return 100;
      case 'D':
        return 500;
      case 'M':
        return 1000;
    }
    return 0;
  }

  int traversal(const string& s) {
    if (s.empty()) return 0;              // 关键：空串返回 0
    if (s.size() == 1) return val(s[0]);  // 单字符直接返回
    int left = 0;
    int right = s.size() - 1;
    int mid = 0;
    int max = 0;

    // 找到最大的表示，划分左右区间
    for (int i = 0; i <= right; i++) {
      int s_val = val(s[i]);
      if (s_val > max) {
        max = s_val;
        mid = i;
      }
    }
    int left_val = traversal(s.substr(0, mid));
    int right_val = traversal(s.substr(mid + 1));

    return max - left_val + right_val;
  }

  int romanToInt(string s) {
    // 真的是Easy吗？感觉要用到分治的思想，先扫到最大的表示，然后分为左右，左减右加，左右区间也得进行类似的处理
    return traversal(s);
  }
};
// @lc code=end

/*
// @lcpr case=start
// "III"\n
// @lcpr case=end

// @lcpr case=start
// "IV"\n
// @lcpr case=end

// @lcpr case=start
// "IX"\n
// @lcpr case=end

// @lcpr case=start
// "LVIII"\n
// @lcpr case=end

// @lcpr case=start
// "MCMXCIV"\n
// @lcpr case=end

 */
