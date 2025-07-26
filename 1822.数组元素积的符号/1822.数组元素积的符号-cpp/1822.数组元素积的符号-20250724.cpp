/*
 * @lc app=leetcode.cn id=1822 lang=cpp
 * @lcpr version=30204
 *
 * [1822] 数组元素积的符号
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

    int signFunc(int x) {
        if(x==0) return 0;
        if (x % 2 != 0) return -1;
        else return 1;
    }

    int arraySign(vector<int>& nums) {
        bool flag = 1;
        int cnt;
        for(auto it : nums){
            if(it == 0){
                flag = 0;
                break;
            }
            if (it < 0) cnt++;
        }
        if(flag == 0) signFunc(flag);
        else{
           return signFunc(cnt);
        }
         return 0;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [-1,-2,-3,-4,3,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,5,0,2,-3]\n
// @lcpr case=end

// @lcpr case=start
// [-1,1,-1,1,-1]\n
// @lcpr case=end

 */

