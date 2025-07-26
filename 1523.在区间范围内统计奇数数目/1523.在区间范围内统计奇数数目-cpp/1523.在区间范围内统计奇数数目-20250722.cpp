/*
 * @lc app=leetcode.cn id=1523 lang=cpp
 * @lcpr version=30204
 *
 * [1523] 在区间范围内统计奇数数目
 */


// @lcpr-template-start
#include <cstdio>
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
    int countOdds(int low, int high) {
        int i = low;
        int cnt = 0 ;
        for(;i<= high;i++){
            if(i%2 != 0) cnt++;
        }
        return cnt;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 3\n7\n
// @lcpr case=end

// @lcpr case=start
// 8\n10\n
// @lcpr case=end

 */

