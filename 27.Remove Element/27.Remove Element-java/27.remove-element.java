/*
 * @lc app=leetcode.cn id=27 lang=java
 * @lcpr version=30121
 *
 * [27] 移除元素
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
class Solution {
    public int removeElement(int[] nums, int val) {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.length; fastIndex++) {
            if (nums[fastIndex] != val) {
                nums[slowIndex] = nums[fastIndex];
                slowIndex++;
            }
        }
        return slowIndex;
    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // [3,2,2,3]\n3\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // [0,1,2,2,3,0,4,2]\n2\n
 * // @lcpr case=end
 * 
 */
