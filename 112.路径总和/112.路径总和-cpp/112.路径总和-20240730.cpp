// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=112 lang=cpp
 * @lcpr version=30204
 *
 * [112] 路径总和
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
  int sum;
  bool getPath(TreeNode *node, int target) {

    if ((!node->left && !node->right) && sum == target) {
      return true;
    }
    if (!node->left && !node->right) {
      return false;
    }

    if (node->left) {
      sum += node->left->val;
      if (getPath(node->left, target)) {
        return true;
      }
      sum -= node->left->val;
    }
    if (node->right) {
      sum += node->right->val;
      if (getPath(node->right, target)) {
        return true;
      }
      sum -= node->right->val;
    }
    
    return false;
  }
  bool hasPathSum(TreeNode *root, int targetSum) {
    if (root) {
      sum += root->val;
      return getPath(root, targetSum);
    }
    return false;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,4,8,11,null,13,4,7,2,null,null,null,1]\n22\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n5\n
// @lcpr case=end

// @lcpr case=start
// []\n0\n
// @lcpr case=end

 */
