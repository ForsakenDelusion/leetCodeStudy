/*
 * @lc app=leetcode.cn id=209 lang=java
 * @lcpr version=30121
 *
 * [209] 长度最小的子数组
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int result = Integer.MAX_VALUE;
        int i = 0;
        int sum = 0;
        for (int j = 0; j < nums.length; j++) {
            sum = sum + nums[j];
            while (sum >= target) {
                result = Math.min(result, j - i + 1);
                sum = sum - nums[i++];

            }
        }
        if (result == Integer.MAX_VALUE) {
            return 0;
        }
        return result;

       
    }
}
// @lc code=end
/*
 * // @lcpr case=start
 * // 11\n[1,1,1,1,1,1,1,1]\n
 * // @lcpr case=end
 * 
 * /*
 * // @lcpr case=start
 * // 7\n[2,3,1,2,4,3]\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // 4\n[1,4,4]\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // 11\n[1,1,1,1,1,1,1,1]\n
 * // @lcpr case=end
 * 
 */
