/*
 * @lc app=leetcode.cn id=58 lang=cpp
 * @lcpr version=30204
 *
 * [58] 最后一个单词的长度
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
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int cnt = 0;
        int i = 0;
        int n = s.size();

        // 1. 跳过开头的空格（反转后的后导空格）
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. 统计单词长度，直到遇到空格或字符串结束
        while (i < n && s[i] != ' ') {
            cnt++;
            i++;
        }
        return cnt;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "Hello World"\n
// @lcpr case=end

// @lcpr case=start
// "   fly me   to   the moon  "\n
// @lcpr case=end

// @lcpr case=start
// "luffy is still joyboy"\n
// @lcpr case=end

 */

