// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=654 lang=cpp
 * @lcpr version=30204
 *
 * [654] 最大二叉树
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
  TreeNode *travesal(vector<int> &nums) {
    TreeNode *node = new TreeNode();
    if (nums.size() == 1) {
      node->val = nums[0];
      return node;
    }
    int max = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > max) {
        max = nums[i];
        maxIndex = i;
      }
    }
    node->val = max;
    if (maxIndex > 0) {
      vector<int> leftNums(nums.begin(), nums.begin() + maxIndex);
      node->left = travesal(leftNums);
    }

    if (maxIndex < nums.size() - 1) {
      vector<int> rightNums(nums.begin() + maxIndex + 1, nums.end());
      node->right = travesal(rightNums);
    }

    return node;
  }
  TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
    return travesal(nums);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [3,2,1,6,0,5]\n
// @lcpr case=end

// @lcpr case=start
// [3,2,1]\n
// @lcpr case=end

 */
