/*
 * @lc app=leetcode.cn id=77 lang=cpp
 * @lcpr version=30204
 *
 * [77] 组合
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
    vector<vector<int>> res;
    vector<int> path;

    void backtracking(int n, int k, int start_idx)
    {
        if (path.size() == k) {
            res.push_back(path);
            return;
        }
        for (int i = start_idx; i <= n; i++) {
            path.push_back(i); // 处理节点
            backtracking(n, k, i + 1); // 递归
            path.pop_back(); // 回溯，撤销处理的节点
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        backtracking(n, k, 1);
        return res;
    }
};
// @lc code=end

/*
// @lcpr case=start
// 4\n2\n
// @lcpr case=end

// @lcpr case=start
// 1\n1\n
// @lcpr case=end

 */
