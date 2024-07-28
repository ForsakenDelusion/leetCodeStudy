/*
 * @lc app=leetcode.cn id=257 lang=cpp
 * @lcpr version=30204
 *
 * [257] 二叉树的所有路径
 */

// @lcpr-template-start
#include <string>
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
private:
  void traversal(TreeNode *node, vector<int> &path, vector<string> &res) {
    path.push_back(node->val); // 中
    // 终止条件，以及处理收集到的节点的逻辑
    if (node->left == NULL && node->right == NULL) {
      string sPath;
      for (int i = 0; i < path.size() - 1; i++) {
        sPath += to_string(path[i]);
        sPath += "->";
      }
      sPath += to_string(path[path.size() - 1]);
      res.push_back(sPath);
      return;
    }

    if (node->left) {
      traversal(node->left, path, res);
      path.pop_back();
    }

    if (node->right) {
      traversal(node->right, path, res);
      path.pop_back();
    }
  }

public:
  vector<string> binaryTreePaths(TreeNode *root) {
    vector<string> res;
    vector<int> path;
    traversal(root, path, res);
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,null,5]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
