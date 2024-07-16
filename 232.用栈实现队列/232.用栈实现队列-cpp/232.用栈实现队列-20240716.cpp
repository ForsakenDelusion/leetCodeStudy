/*
 * @lc app=leetcode.cn id=232 lang=cpp
 * @lcpr version=30204
 *
 * [232] 用栈实现队列
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
class MyQueue {
public:
    MyQueue() {

    }
    stack<int> stackIn;
    stack<int> stackOut;
    void push(int x) {
        stackIn.push(x);
    }
    
    int pop() {
        if (stackOut.empty()) {
            while (!stackIn.empty()) {
              stackOut.push(stackIn.top());
              stackIn.pop();
            }
        }
        int res = stackOut.top();
        stackOut.pop();
        return res;
    }
    
    int peek() {
      int peek = this->pop();
      stackOut.push(peek);
      return peek;
    }
    
    bool empty() {
        return stackOut.empty()&&stackIn.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end



/*
// @lcpr case=start
// ["MyQueue", "push", "push", "peek", "pop", "empty"][[], [1], [2], [], [], []]\n
// @lcpr case=end

 */

