/*
 * @lc app=leetcode.cn id=1672 lang=cpp
 * @lcpr version=30204
 *
 * [1672] 最富有客户的资产总量
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
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for(int i  = 0 ; i < accounts.size();i++){
            int sum = 0;
            for(int j = 0 ;j < accounts[i].size();j++){
                sum += accounts[i][j];
            }
            if(sum >= max) {
                max = sum;
            }
        }
        return max;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,2,3],[3,2,1]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,5],[7,3],[3,5]]\n
// @lcpr case=end

// @lcpr case=start
// [[2,8,7],[7,1,3],[1,9,5]]\n
// @lcpr case=end

 */

