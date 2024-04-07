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
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode sentinel;
        ListNode nextNode;
        ListNode curNode;
        ListNode tempHead;
        ListNode temp;
        ListNode tempTail;

        sentinel = new ListNode(205, head);
        curNode = sentinel;
        temp = head.next;
        nextNode = head;

        while (temp != null && temp.next != null) {
            curNode.next = temp;
            curNode = temp;
            curNode.next = nextNode;
            nextNode.next = curNode.next;
            nextNode = curNode.next;
            temp = nextNode.next;
            
        }


        
        

        return sentinel.next;
    }
}
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */

