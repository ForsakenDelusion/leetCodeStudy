/*
 * @lc app=leetcode.cn id=面试题 02.07 lang=cpp
 * @lcpr version=30204
 *
 * [面试题 02.07] 链表相交
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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        ListNode *ANode = headA;
        ListNode *BNode = headB;
        ListNode *curNode = ANode;
        ListNode *curA;
        ListNode *curB;
        int countA = 0;
        int countB = 0;
        int sub = 0;
        while (curNode != NULL)
        {
            curNode = curNode->next;
            countA++;
        }
        curNode = headB;
        while (curNode != NULL)
        {
            curNode = curNode->next;
            countB++;
        }
        curA = headA;
        curB = headB;
        if (countB > countA)
        {
            swap(countA, countB);
            swap(curA, curB);
        }

        sub = countA - countB;

        while (sub--)
        {
            curA = curA->next;
        }

        while (curA != NULL)
        {
            if (curA == curB)
            {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }

        return NULL;
    }
};
// @lc code=end

/*
// @lcpr case=start
// 8\n[4,1,8,4,5]\n[5,0,1,8,4,5]\n2\n3\n
// @lcpr case=end

// @lcpr case=start
// 2\n[0,9,1,2,4]\n[3,2,4]\n3\n1\n
// @lcpr case=end

// @lcpr case=start
// 0\n[2,6,4]\n[1,5]\n3\n2\n
// @lcpr case=end

 */
