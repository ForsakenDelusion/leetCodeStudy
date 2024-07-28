// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=404 lang=cpp
 * @lcpr version=30204
 *
 * [404] 左叶子之和
 */

// @lcpr-template-start
#include <exception>
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
  void getLeft(TreeNode *node, vector<int> &res) {

    // 终止条件
    if (node->left == NULL && node->right == NULL) {
      res.push_back(node->val);
      return;
    }

    // 左
    if (node->left) {
      getLeft(node->left, res);
    }

    // 右
    if (node->right && (node->right->left || node->right->right)) {
      getLeft(node->right, res);
    }
  }
  int sumOfLeftLeaves(TreeNode *root) {
    int sum = 0;
    vector<int> res;
    if (!root->left && !root->right) {
      return 0;
    }
    getLeft(root, res);
    for (int i : res) {
      sum += i;
    }
    return sum;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [3,9,20,null,null,15,7]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
