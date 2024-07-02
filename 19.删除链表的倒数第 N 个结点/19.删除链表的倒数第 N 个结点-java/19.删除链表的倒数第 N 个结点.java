/*
 * @lc app=leetcode.cn id=19 lang=java
 * @lcpr version=30121
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode sentinel = new ListNode(205, head);
        ListNode firstNode = sentinel;
        ListNode lastNode = sentinel;

        for (; n > 0; n--) {
            firstNode = firstNode.next;
        }

        while (firstNode.next != null) {
            firstNode = firstNode.next;
            lastNode = lastNode.next;
        }

        lastNode.next = lastNode.next.next;
        return sentinel.next;
    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // [1,2,3,4,5]\n2\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // [1]\n1\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // [1,2]\n1\n
 * // @lcpr case=end
 * 
 */
