/*
 * @lc app=leetcode.cn id=3127 lang=cpp
 * @lcpr version=30204
 *
 * [3127] 构造相同颜色的正方形
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
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0; i <= 1; i++) {
            for (int j = 0; j <= 1; j++) {
                if (check(grid, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool check(vector<vector<char>> &grid, int x, int y) {
        int count = 0;
        for (int i = 0; i <= 1; i++) {
            for (int j = 0; j <= 1; j++) {
                count += (grid[x + i][y + j] == 'B');
            }
        }
        return count != 2;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [["B","W","B"],["B","W","W"],["B","W","B"]]\n
// @lcpr case=end

// @lcpr case=start
// [["B","W","B"],["W","B","W"],["B","W","B"]]\n
// @lcpr case=end

// @lcpr case=start
// [["B","W","B"],["B","W","W"],["B","W","W"]]\n
// @lcpr case=end

 */

