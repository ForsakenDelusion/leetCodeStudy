// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=113 lang=cpp
 * @lcpr version=30204
 *
 * [113] 路径总和 II
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
  vector<vector<int>> res;
  vector<int> path;
  int sum;

  void getPath(TreeNode *cur, int target) {
    if ((!cur->left && !cur->right) && sum == target) {
      res.push_back(path);
      return;
    }

    if (!cur->left && !cur->right) {
      return;
    }

    if (cur->left) {
      path.push_back(cur->left->val);
      sum += cur->left->val;
      getPath(cur->left, target);
      sum -= cur->left->val;
      path.pop_back();
    }

    if (cur->right) {
      path.push_back(cur->right->val);
      sum += cur->right->val;
      getPath(cur->right, target);
      sum -= cur->right->val;
      path.pop_back();
    }

    return;
  }

  vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
    res.clear();
    path.clear();
    if (!root) {
      return res;
    }
    path.push_back(root->val);
    sum+=root->val;
    getPath(root, targetSum);
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,4,8,11,null,13,4,7,2,null,null,5,1]\n22\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n5\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n0\n
// @lcpr case=end

 */
