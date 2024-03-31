/*
 * @lc app=leetcode.cn id=59 lang=java
 * @lcpr version=30121
 *
 * [59] 螺旋矩阵 II
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
class Solution {
    public int[][] generateMatrix(int n) {
        int loop = 0;
        int start = 0;
        int i, j ;
        int count = 1;
        int[][] res = new int[n][n];
        while (loop++ < n / 2) {
            for (j = start; j < n - loop; j++) {
                res[start][j] = count++;
            }

            for (i = start; i < n - loop; i++) {
                res[i][j] = count++;
            }

            for (; j > start; j--) {
                res[i][j] = count++;
            }

            for (; i > start; i--) {
                res[i][j] = count++;
            }

            start++;

        }

        if (n % 2 == 1) {
            res[start][start] = count;
        }
        return res;
    }
}
// @lc code=end

/*
 * // @lcpr case=start
 * // 3\n
 * // @lcpr case=end
 * 
 * // @lcpr case=start
 * // 1\n
 * // @lcpr case=end
 * 
 */
