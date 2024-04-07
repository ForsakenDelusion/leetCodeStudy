/*
 * @lc app=leetcode.cn id=24 lang=java
 * @lcpr version=30121
 *
 * [24] 两两交换链表中的节点
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
    public ListNode swapPairs(ListNode head) {
        ListNode temp;
        ListNode tempNext;
        ListNode sentinel = new ListNode(205,head);
        ListNode curNode = sentinel;
        
        while (curNode.next != null && curNode.next.next != null) {
            temp = curNode.next.next;
            tempNext = curNode.next.next.next;
            curNode.next.next.next = curNode.next;
            curNode.next.next = tempNext;
            curNode.next = temp;
            curNode = curNode.next.next;
        }
        return sentinel.next;
    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // [1,2,3,4]\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // []\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // [1]\n
 * // @lcpr case=end
 * 
 */
