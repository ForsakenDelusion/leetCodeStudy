/*
 * @lc app=leetcode.cn id=704 lang=java
 * @lcpr version=30121
 *
 * [704] 二分查找
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
class Solution {
    public int search(int[] nums, int target) {
        if (target < nums[0] || target > nums[nums.length - 1]) {
            return -1;
        }

        int left = 0, right = nums.length - 1;

        while (left <= right) {

            int middle = left + ((right - left) >> 1);

            if (nums[middle] > target) {
                right = middle - 1;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else if (nums[middle] == target) {
                return middle;
            }

        }

        return -1;
    }

}
//@lc code=end

// @lcpr case=start
// [1,3,5,6,8,65]\n3\n
// @lcpr case=end
