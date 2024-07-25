/*
 * @lc app=leetcode.cn id=111 lang=cpp
 * @lcpr version=30204
 *
 * [111] 二叉树的最小深度
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  int getDepth(TreeNode *node) {
    if (node == NULL)
      return 0;
    int leftDepth = getDepth(node->left);   // 左
    int rightDepth = getDepth(node->right); // 右
                                            // 中
    // 当一个左子树为空，右不为空，这时并不是最低点
    if (node->left == NULL && node->right != NULL) {
      return 1 + rightDepth;
    }
    // 当一个右子树为空，左不为空，这时并不是最低点
    if (node->left != NULL && node->right == NULL) {
      return 1 + leftDepth;
    }
    int result = 1 + min(leftDepth, rightDepth);
    return result;
  }

  int minDepth(TreeNode *root) { return getDepth(root); }
};
// @lc code=end

/*
// @lcpr case=start
// [3,9,20,null,null,15,7]\n
// @lcpr case=end

// @lcpr case=start
// [2,null,3,null,4,null,5,null,6]\n
// @lcpr case=end

 */
