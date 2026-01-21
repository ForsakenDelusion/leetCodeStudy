/*
 * @lc app=leetcode.cn id=66 lang=cpp
 * @lcpr version=30204
 *
 * [66] 加一
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
    vector<int> plusOne(vector<int>& digits) {
        int co = 1;
        reverse(digits.begin(),digits.end());
        for(int i = 0;i < digits.size();i++){
            cout << digits[i] << endl;
            int tmp = digits[i];
            digits[i] = (digits[i] + co) % 10;
            co = (tmp + co) / 10;
        }
         if(co == 1) {digits.push_back(1);}
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [4,3,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [9]\n
// @lcpr case=end

 */

