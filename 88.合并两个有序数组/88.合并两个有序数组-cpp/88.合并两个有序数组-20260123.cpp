// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=88 lang=cpp
 * @lcpr version=30204
 *
 * [88] 合并两个有序数组
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
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> n1_copy(nums1.begin(), nums1.begin() + m);

        int p_nums1 = 0;
        int p_nums2 = 0;
        int i =0;
        while(p_nums1 < m && p_nums2 < n) {
            
            if (p_nums1 < m && n1_copy[p_nums1] <= nums2[p_nums2]) {
                nums1[i] = n1_copy[p_nums1];
                p_nums1++;
                i++;
            } else if (p_nums2 < n && n1_copy[p_nums1] > nums2[p_nums2]) {
                nums1[i] = nums2[p_nums2];
                p_nums2++;
                i++;
            }
        }
        while(p_nums1 < m) nums1[i++] = n1_copy[p_nums1++];
        while(p_nums2 < n) nums1[i++] = nums2[p_nums2++];
    }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,0,0,0]\n3\n[2,5,6]\n3\n
// @lcpr case=end

// @lcpr case=start
// [1]\n1\n[]\n0\n
// @lcpr case=end

// @lcpr case=start
// [0]\n0\n[1]\n1\n
// @lcpr case=end

 */
