// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=150 lang=cpp
 * @lcpr version=30204
 *
 * [150] 逆波兰表达式求值
 */

// @lcpr-template-start
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
  bool isOperator(string x) {
    return x == "+" || x == "-" || x == "*" || x == "/";
  };
  int evalRPN(vector<string> &tokens) {
    int a1 = 0;
    int a2 = 0;
    stack<string> st;
    for (int i = 0; i < tokens.size(); i++) {
      if (st.empty() || !isOperator(*(tokens.begin() + i))) {
        st.push(*(tokens.begin() + i));
      } else {
        a1 = stoi(st.top());
        st.pop();
        a2 = stoi(st.top());
        st.pop();

        if (*(tokens.begin() + i) == "+") {
          st.push(to_string(a2 + a1));
        }
        if (*(tokens.begin() + i) == "-") {
          st.push(to_string(a2 - a1));
        }
        if (*(tokens.begin() + i) == "*") {
          st.push(to_string(a2 * a1));
        }
        if (*(tokens.begin() + i) == "/") {
          st.push(to_string(a2 / a1));
        }
      }
    }
    return stoi(st.top());
  }
};
// @lc code=end

/*
// @lcpr case=start
// ["2","1","+","3","*"]\n
// @lcpr case=end

// @lcpr case=start
// ["4","13","5","/","+"]\n
// @lcpr case=end

// @lcpr case=start
// ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]\n
// @lcpr case=end

 */
