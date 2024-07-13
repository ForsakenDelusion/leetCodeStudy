/*
 * @lc app=leetcode.cn id=18 lang=cpp
 * @lcpr version=30204
 *
 * [18] 四数之和
 */

// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    for (int k = 0; k < nums.size(); k++) {
      if (nums[k] > target && nums[k] >= 0) {
        return res;
      }
      if (k > 0 && nums[k] == nums[k - 1]) {
        continue;
      }
      for (int i = k + 1; i < nums.size(); i++) {
        if (nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) {
          break;
        }
        if (i > k + 1 && nums[i] == nums[i - 1]) {
          continue;
        }
        int left = i + 1;
        int right = nums.size() - 1;
        long sum = 0;
        while (left < right) {
          sum =(long) nums[k] + nums[i] + nums[left] + nums[right];
          if (sum > target) {
            right--;
          } else if (sum < target) {
            left++;
          } else {
            res.push_back(
                vector<int>{nums[k], nums[i], nums[left], nums[right]});
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
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,0,-1,0,-2,2]\n0\n
// @lcpr case=end

// @lcpr case=start
// [2,2,2,2,2]\n8\n
// @lcpr case=end

 */
