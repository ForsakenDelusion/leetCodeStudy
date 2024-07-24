/*
 * @lc app=leetcode.cn id=101 lang=cpp
 * @lcpr version=30204
 *
 * [101] 对称二叉树
 */

// @lcpr-template-start
#include <fstream>
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
  bool isEqual(TreeNode *left, TreeNode *right) {
    if (left == NULL && right != NULL) {
      return false;
    } else if (left != NULL && right == NULL) {
      return false;
    } else if (left == NULL && right == NULL) {
      return true;
    } else if (left->val != right->val) {
      return false;
    }

    bool outSide = isEqual(left->left, right->right);
    bool inSide = isEqual(left->right, right->left);
    bool equal = outSide && inSide;
    return equal;
  }
  bool isSymmetric(TreeNode *root) {
    if (root == NULL) {
      return false;
    }
    return isEqual(root->left, root->right);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,2,3,4,4,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,2,null,3,null,3]\n
// @lcpr case=end

 */
