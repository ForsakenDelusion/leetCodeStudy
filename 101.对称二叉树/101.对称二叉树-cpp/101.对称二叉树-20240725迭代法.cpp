// @lcpr-before-debug-begin




// @lcpr-before-debug-end

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
  bool isEqual(TreeNode *cur) {
    stack<TreeNode *> st;
    st.push(cur);
    while (!st.empty()) {
      TreeNode *node = st.top();
      st.pop();
      if (!cur->left && !cur->right) {
        continue;
      }

      if (cur->left->val != cur->right->val || !cur->left && cur->right ||
          !cur->right && cur->left) {
        return false;
      }

      if (cur->right) {
        st.push(cur->right);
      }
      if (cur->left) {
        st.push(cur->left);
      }
    }
    return true;
  }
  bool isSymmetric(TreeNode *root) {
    if (root == NULL) {
      return false;
    }
    return isEqual(root);
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
