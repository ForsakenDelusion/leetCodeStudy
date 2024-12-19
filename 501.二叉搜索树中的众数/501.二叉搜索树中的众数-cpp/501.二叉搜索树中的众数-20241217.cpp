/*
 * @lc app=leetcode.cn id=501 lang=cpp
 * @lcpr version=30204
 *
 * [501] 二叉搜索树中的众数
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    unordered_map<int, int> map; // 统计频率
    void traversal(TreeNode* root) {
        if (root == nullptr) return;
        traversal(root->left);
        map[root->val]++; // 统计频率
        traversal(root->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        map.clear();
        traversal(root);
        vector<int> result;
        int maxCount = 0;
        
        // 第一次遍历找到最大频率
        for (const auto& pair : map) {
            maxCount = max(maxCount, pair.second);
        }
        
        // 第二次遍历找出所有出现次数等于maxCount的元素
        for (const auto& pair : map) {
            if (pair.second == maxCount) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,null,2,2]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

