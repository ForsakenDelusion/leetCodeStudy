// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=15 lang=cpp
 * @lcpr version=30204
 *
 * [15] 三数之和
 */

// @lc code=start
#include <algorithm>
#include <cstddef>
#include <unordered_set>
#include <vector>
class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    int sum = 0;
    std::vector<std::vector<int>> res;
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        return res;
      }
      if (i > 0 && nums[i] == nums[i - 1]) { // 剪枝函数
        continue;
      }
      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right) {
        sum = nums[i] + nums[left] + nums[right];
        if (sum > 0) {
          right--;
        } else if (sum < 0) {
          left++;
        } else {
          res.push_back(std::vector<int>{nums[i], nums[left], nums[right]});
          while (left < right && nums[left] == nums[left + 1]) {
            left++;
          }
          while (left < right && nums[right] == nums[right - 1]) {
            right--;
          }
          right--;
          left++;
        }
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [-1,0,1,2,-1,-4]\n
// @lcpr case=end

// @lcpr case=start
// [0,1,1]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,0]\n
// @lcpr case=end

 */
