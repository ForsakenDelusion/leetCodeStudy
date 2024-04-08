/*
 * @lc app=leetcode.cn id=977 lang=java
 * @lcpr version=30121
 *
 * [977] 有序数组的平方
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] result = new int[nums.length];
        int left = 0;
        int right = nums.length - 1;
        int index = right;
        while (left <= right) {
            if (nums[left] * nums[left] < nums[right] * nums[right]) {
                result[index--] = nums[right] * nums[right];
                right -= 1;
            } else {
                result[index--] = nums[left] * nums[left];
                left += 1;
            }

        }

        return result;
    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // [-4,-1,0,3,10]\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // [-7,-3,2,3,11]\n
 * // @lcpr case=end
 * 
 */
