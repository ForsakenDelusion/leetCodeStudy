/*
 * @lc app=leetcode.cn id=225 lang=cpp
 * @lcpr version=30204
 *
 * [225] 用队列实现栈
 */

// @lcpr-template-start
#include <limits>
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
class MyStack {
public:
  queue<int> que;
  MyStack() {}

  void push(int x) {
    que.push(x);
  }

  int pop() {
    for (int i = 0; i < que.size() - 1; i++) {
      push(que.front());
      que.pop();
    }
    int res = que.front();
    que.pop();
    return res;
  }

  int top() {
    return que.back();
  }

  bool empty() {
    return que.empty();
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

/*
// @lcpr case=start
// ["MyStack", "push", "push", "top", "pop", "empty"][[], [1], [2], [], [],
[]]\n
// @lcpr case=end

 */
