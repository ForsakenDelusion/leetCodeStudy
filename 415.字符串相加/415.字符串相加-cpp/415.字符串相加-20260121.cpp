// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=415 lang=cpp
 * @lcpr version=30204
 *
 * [415] 字符串相加
 */


// @lcpr-template-start
#include <string>
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
    string addStrings(string num1, string num2) {

        if(num1<num2) swap(num1,num2);

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int out= 0;
        string res;
        for(int i = 0;i<num1.size();i++) {
            int tmp = (num1[i]- '0') + out;
            if(i < num2.size()) {
                tmp += (num2[i] - '0');
            }
            out = tmp /10;
            tmp %= 10;
            res.push_back(to_string(tmp)[0]);
        }
        if(out == 1) res.push_back('1');

        reverse(res.begin(),res.end());

        return res;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// "11"\n"123"\n
// @lcpr case=end

// @lcpr case=start
// "456"\n"77"\n
// @lcpr case=end

// @lcpr case=start
// "0"\n"0"\n
// @lcpr case=end

 */

