// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=896 lang=cpp
 * @lcpr version=30204
 *
 * [896] 单调数列
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
  bool isMonotonic(vector<int>& nums) {
    /* // TODO 判断一下跳出递归的条件
    if(nums.size() <= 1 ) return true;
    int mid = nums.size() / 2;
    int left = (0 + mid) /2;
    int right = (mid + nums.size()) / 2;
    if((nums[left] >= nums[mid] && nums[mid]>=
    nums[right])||(nums[left]<=nums[mid] && nums[mid] <=nums[right])) {
        // TODO 构造新的左右vector，用递归
        vector<int> left_nums(nums.begin(), nums.begin() + mid);
        vector<int> right_nums(nums.begin() + mid+1, nums.end());

        return isMonotonic(left_nums) && isMonotonic(right_nums);
    }else {
        return false;
    }
    return true; */

    bool isDec = false;
    bool isInc = false;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] > nums[i - 1]) isInc = true;
      if (nums[i] < nums[i - 1]) isDec = true;
    }
    return !(isInc && isDec);  // 只要不是“同时有增有减”
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [6,5,4,4]\n
// @lcpr case=end

// @lcpr case=start
// [1,3,2]\n
// @lcpr case=end

 */
