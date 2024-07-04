// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=59 lang=cpp
 * @lcpr version=30204
 *
 * [59] 螺旋矩阵 II
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
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int loop = n >> 1;
        int mid = n >> 1;
        int startx = 0;
        int starty = 0;
        int offset = 0;
        int count = 1;
        int i, j;

        while (loop--)
        {
            i = startx;
            j = starty;

            for (j; j < n - offset; j++)
            {
                res[i][j] = count++;
            }
            j--; // 解决由循环导致的溢出
            i++; // 跳转到下一行

            for (i; i < n - offset; i++)
            {
                res[i][j] = count++;
            }
            i--;
            j--;

            for (; j >= starty; j--)
            {
                res[i][j] = count++;
            }
            i--;
            j++;

            for (; i > startx; i--) // 由于startx和最后一条边的闭区间重叠,所以不能用
            {
                res[i][j] = count++;
            }

            startx++;
            starty++;
            offset += 1;
        }

        if (n % 2 != 0)
        {
            res[mid][mid] = count;
        }

        return res;
    }
};
// @lc code=end

/*
// @lcpr case=start
// 3\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

*/
