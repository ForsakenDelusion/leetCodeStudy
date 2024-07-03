// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=704 lang=cpp
 * @lcpr version=30204
 *
 * [704] 二分查找
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
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size();
        int mid = (left + right) >> 1;
        while (left < right)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            else
            {
                if (nums[mid] > target)
                {
                    right = mid;
                    mid = (left + right) >> 1;
                }
                else if (nums[mid] < target)
                {
                    left = mid + 1;
                    mid = (left + right) >> 1;
                }
            }
        }
        return -1;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [-1,0,3,5,9,12]\n9\n
// @lcpr case=end

// @lcpr case=start
// [-1,0,3,5,9,12]\n2\n
// @lcpr case=end

 */
