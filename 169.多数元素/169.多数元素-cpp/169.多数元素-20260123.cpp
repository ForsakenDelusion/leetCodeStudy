/*
 * @lc app=leetcode.cn id=169 lang=cpp
 * @lcpr version=30204
 *
 * [169] 多数元素
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
    static const int N = 5 * 10010;
    int A[N]={0};
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = n / 2;
        int max=INT_MIN;
        int min=INT_MAX;
        for(auto & it : nums){
            if(it > max) max = it;
            if(it < min) min = it;
            A[it]++;

        }
        for(int i = min;i<=max;i++){
            if(A[i] > cnt) return i;
        }
        return -1;
    }
};
// @lc code=end

/*
// @lcpr case=start
// [3,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [2,2,1,1,1,2,2]\n
// @lcpr case=end

 */
