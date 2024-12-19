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
    vector<int> vec;
    TreeNode* pre = nullptr;
    int max_count = 0;
    int count = 0;
    void traversal(TreeNode* cur) {
        if (cur == nullptr) return;
        traversal(cur->left);

        if(pre == nullptr) {
            count = 1;
        } else if(pre->val == cur->val) {
            count++;
        } else if(pre->val != cur->val){
            count = 1;
        }
        pre = cur;

        if(count == max_count) {
            vec.push_back(cur->val);
        }

        if(count > max_count) {
            max_count = count;
            vec.clear();
            vec.push_back(cur->val);
        }

        traversal(cur->right);
        return;
    }
public:
    vector<int> findMode(TreeNode* root) {
        count = 0;
        max_count = 0;
        pre = nullptr; // 记录前一个节点
        vec.clear();
        traversal(root);
        return vec;
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

