// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=151 lang=cpp
 * @lcpr version=30204
 *
 * [151] 反转字符串中的单词
 */

// @lcpr-template-start
#include <iterator>
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
  void removeExSpaces(string &s) {
    int slow = 0;
    int fast = 0;
    for (; fast < s.size(); fast++) {
      if (s[fast] != ' ') {
        if (slow != 0) {
          s[slow++] = ' ';
        }
        while (fast < s.size() && s[fast] != ' ') {
          s[slow++] = s[fast++];
        }
      }
    }
    s.resize(slow);
  }

  string reverseWords(string s) {
    removeExSpaces(s);
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size();i++) {
      if (s[i] != ' ') {
        int j = i;
        while (j < s.size() && s[j] != ' ') {
          j++;
        }
        reverse(s.begin() + i, s.begin() + j);
        i = j;
      }
    }
    return s;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "the sky is blue"\n
// @lcpr case=end

// @lcpr case=start
// "  hello world  "\n
// @lcpr case=end

// @lcpr case=start
// "a good   example"\n
// @lcpr case=end

 */
