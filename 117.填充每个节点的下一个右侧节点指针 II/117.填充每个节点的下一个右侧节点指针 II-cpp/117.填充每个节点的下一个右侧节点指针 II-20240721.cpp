/*
 * @lc app=leetcode.cn id=117 lang=cpp
 * @lcpr version=30204
 *
 * [117] 填充每个节点的下一个右侧节点指针 II
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
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
  Node *connect(Node *root) {
    queue<Node *> que;
    if (root) {
      que.push(root);
      root->next = NULL;
    }
    while (!que.empty()) {
      int size = que.size();
      Node *layerHead = que.front();
      while (size--) {
        Node *cur = que.front();
        layerHead->next = cur;
        layerHead = cur;
        if (size == 0) {
          cur->next = NULL;
        }
        que.pop();
        if (cur->left) {
          que.push(cur->left);
        }
        if (cur->right) {
          que.push(cur->right);
        }
      }
    }
    return root;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,4,5,null,7]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */
