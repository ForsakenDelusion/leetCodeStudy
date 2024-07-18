// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=239 lang=cpp
 * @lcpr version=30204
 *
 * [239] 滑动窗口最大值
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
private:
  class MyQueue {
  public:
    deque<int> que;
    void pop(int val) {
      if (que.back() == val && !que.empty()) {
        que.pop_back();
      }
    }

    void push(int val) {
      while (!que.empty() && val > que.front()) {
        que.pop_front();
      }
      que.push_front(val);
    }

    int getMax() { return que.back(); }
  };

public:
  vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    MyQueue que;
    vector<int> res;
    for (int i = 0; i < k; i++) {
      que.push(nums[i]);
    }
    res.push_back(que.getMax());
    for (int i = k; i < nums.size(); i++) {
      que.pop(nums[i - k]);
      que.push(nums[i]);
      res.push_back(que.getMax());
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,3,-1,-3,5,3,6,7]\n3\n
// @lcpr case=end

// @lcpr case=start
// [1]\n1\n
// @lcpr case=end

 */
