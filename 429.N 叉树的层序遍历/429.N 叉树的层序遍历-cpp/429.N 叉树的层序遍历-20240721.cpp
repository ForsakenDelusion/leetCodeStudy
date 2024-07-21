/*
 * @lc app=leetcode.cn id=429 lang=cpp
 * @lcpr version=30204
 *
 * [429] N 叉树的层序遍历
 */

// @lcpr-template-start
#include <iterator>
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
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
  vector<vector<int>> levelOrder(Node *root) {
    queue<Node *> que;
    if (root) {
      que.push(root);
    }
    vector<vector<int>> res;
    while (!que.empty()) {
      int size = que.size();
      vector<int> layer;
      for (int i = 0; i < size; i++) {
        Node *cur = que.front();
        que.pop();
        layer.push_back(cur->val);
        for (int j = 0; j < cur->children.size(); j++) {
          if (cur->children[j]) {
            que.push(cur->children[j]);
          }
        }
      }
      res.push_back(layer);
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,null,3,2,4,null,5,6]\n
// @lcpr case=end

// @lcpr case=start
//
[1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]\n
// @lcpr case=end

 */
