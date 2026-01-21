// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=728 lang=cpp
 * @lcpr version=30204
 *
 * [728] 自除数
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

    bool isTarget(int num){
        int tmp = num;
        vector<int>bit;
        while(tmp > 0){
            int t = tmp%10;
            if (t == 0)   return false;
            bit.push_back(t);
            tmp/= 10;
        }
        for(auto &it : bit){
            if (num % it != 0){
                return false;
            }
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int num = left;num <= right ;num++) {
            if(isTarget(num)){
                res.push_back(num);
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 1\n22\n
// @lcpr case=end

// @lcpr case=start
// 47\n85\n
// @lcpr case=end

 */

