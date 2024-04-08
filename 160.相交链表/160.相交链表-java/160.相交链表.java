/*
 * @lc app=leetcode.cn id=160 lang=java
 * @lcpr version=30121
 *
 * [160] 相交链表
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode(int x) {
 * val = x;
 * next = null;
 * }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode curA = headA;
        ListNode curB = headB;
        int countA = 0;
        int countB = 0;
        int count = 0;
        ListNode tempNode;
        int temp;

        while (headA != null) {
            headA = headA.next;
            countA++;
        }
        while (headB != null) {
            headB = headB.next;
            countB++;
        }

        if (countB > countA) {
            temp = countA;
            countA = countB;
            countB = temp;

            tempNode = curA;
            curA = curB;
            curB = tempNode;

        }

        int n = countA - countB;

        for (; n > 0; n--) {
            curA = curA.next;
        }

        while (curA != null) {
            if (curA == curB) {
                return curA;
            }
            curA = curA.next;
            curB = curB.next;
        }
        return null;

    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // 8\n[4,1,8,4,5]\n[5,6,1,8,4,5]\n2\n3\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // 2\n[1,9,1,2,4]\n[3,2,4]\n3\n1\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // 0\n[2,6,4]\n[1,5]\n3\n2\n
 * // @lcpr case=end
 * 
 */
