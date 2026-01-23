// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=20 lang=cpp
 * @lcpr version=30204
 *
 * [20] 有效的括号
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
    char co(char a)
    {
        switch (a) {
        case '(':
            return ')';
        case '[':
            return ']';
        case '{':
            return '}';
        case ')':
            return '(';
        case ']':
            return '[';
        case '}':
            return '{';
        default:
            return ' ';
        }
    }

    bool isValid(string s)
    {
        if (s.size() == 1)
            return false;
        stack<char> res;
        for (int i = 0; i < s.size(); i++) {
            char tmp = ' ';
            if (!res.empty()) {
                tmp = res.top();
            }
            if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && tmp == co(s[i])) {
                res.pop();
                continue;
            }
            res.push(s[i]);
        }
        return res.empty();
    }
};
// @lc code=end

/*
// @lcpr case=start
// "()"\n
// @lcpr case=end

// @lcpr case=start
// "()[]{}"\n
// @lcpr case=end

// @lcpr case=start
// "(]"\n
// @lcpr case=end

// @lcpr case=start
// "([])"\n
// @lcpr case=end

// @lcpr case=start
// "([)]"\n
// @lcpr case=end

 */
