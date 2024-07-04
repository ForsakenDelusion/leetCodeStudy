/*
 * @lc app=leetcode.cn id=977 lang=cpp
 * @lcpr version=30204
 *
 * [977] 有序数组的平方
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
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> newArray = nums;
        int right = nums.size() - 1, left = 0;
        int newLeft = newArray.size() - 1;
        while (left <= right)
        {
            if (right == left)
            {
                newArray[newLeft] = nums[right] * nums[right];
            }

            int rightSquare = nums[right] * nums[right];
            int leftSquare = nums[left] * nums[left];

            if (rightSquare > leftSquare)
            {
                newArray[newLeft] = rightSquare;
                right -= 1;
                newLeft -= 1;
            }
            else
            {
                newArray[newLeft] = leftSquare;
                left += 1;
                newLeft -= 1;
            }
        }
        return newArray;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [-4,-1,0,3,10]\n
// @lcpr case=end

// @lcpr case=start
// [-7,-3,2,3,11]\n
// @lcpr case=end

 */
