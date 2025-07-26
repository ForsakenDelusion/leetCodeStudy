/*
 * @lc app=leetcode.cn id=1572 lang=cpp
 * @lcpr version=30204
 *
 * [1572] 矩阵对角线元素的和
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
  int diagonalSum(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    vector<vector<int>> visited(rows, vector<int>(cols, 0));
    int sum = 0;
    for (int i = 0; i < mat.size(); i++) {
      int j = i;
      sum += mat[i][j];
      visited[i][j] = 1;
    }
    for (int i = mat.size() - 1; i >= 0; i--) {
      int j = mat.size() - 1 - i;
      if (visited[i][j] == 0) {
        sum += mat[i][j];
        visited[i][j] = 1;
      } else {
        continue;
      }
    }
    return sum;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [[1,2,3],[4,5,6],[7,8,9]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,1,1,1],[1,1,1,1],[1,1,1,1],[1,1,1,1]]\n
// @lcpr case=end

// @lcpr case=start
// [[5]]\n
// @lcpr case=end

 */
