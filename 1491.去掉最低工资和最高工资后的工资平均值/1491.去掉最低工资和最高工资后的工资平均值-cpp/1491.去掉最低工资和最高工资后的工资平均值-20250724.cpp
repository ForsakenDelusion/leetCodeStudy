/*
 * @lc app=leetcode.cn id=1491 lang=cpp
 * @lcpr version=30204
 *
 * [1491] 去掉最低工资和最高工资后的工资平均值
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
    double average(vector<int>& salary) {
        int max = salary[0];
        int min = salary[0];
        int sum = 0;
        double res = 0;
        for(auto it : salary) {
            sum += it;
            if (it > max) {
                max = it;
            }
            if (it < min) {
                min = it;
            }

        }
        sum = sum - max - min;
        res = double(sum) / (salary.size() - 2);
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [4000,3000,1000,2000]\n
// @lcpr case=end

// @lcpr case=start
// [1000,2000,3000]\n
// @lcpr case=end

// @lcpr case=start
// [6000,5000,4000,3000,2000,1000]\n
// @lcpr case=end

// @lcpr case=start
// [8000,9000,2000,3000,6000,1000]\n
// @lcpr case=end

 */

