/*
 * @lc app=leetcode.cn id=203 lang=java
 * @lcpr version=30121
 *
 * [203] 移除链表元素
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
    public ListNode removeElements(ListNode head, int val) {
        ListNode sentinel = new ListNode(205, head);
        sentinel.next = head;
        ListNode cur = sentinel;
        while (cur.next != null) {
            if (cur.next.val == val) {
                cur.next = cur.next.next;
            } else {
                cur = cur.next;
            }
        }
        return sentinel.next;

    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // [1,2,6,3,4,5,6]\n6\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // []\n1\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // [7,7,7,7]\n7\n
 * // @lcpr case=end
 * 
 */
