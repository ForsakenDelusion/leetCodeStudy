/*
 * @lc app=leetcode.cn id=704 lang=java
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
    int index;
    public int search(int[] nums, int target) {
        int leng = nums.length;
        
        int middle = leng / 2;
        while (nums[middle] > target || middle >=0) {
            middle -= 1;
            if (nums[middle] == target) {
                index = middle;
            }
        }
        while (nums[middle] < target || middle <=leng) {
            middle += 1;
            if (nums[middle] == target) {
                index = middle;
            }
        }
        
        return index;
    }
}
// @lc code=end
