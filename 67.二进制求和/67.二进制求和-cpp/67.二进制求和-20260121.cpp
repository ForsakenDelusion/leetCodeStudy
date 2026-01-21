// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=67 lang=cpp
 * @lcpr version=30204
 *
 * [67] 二进制求和
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
    string addBinary(string a, string b) {
        if(a. size() < b.size()) swap(a,b);
        string res;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int out = 0;
        for(int i = 0;i < a.size();i++)
        {   
            int aint = a[i] - '0';
            int bint = b[i] - '0';
            int tmp = (aint + bint + out) %2;
            out = (aint + bint  + out) /2;
            res.push_back(to_string(tmp)[0]);
        }
        if(out == 1) res.push_back('1');

        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "11"\n"1"\n
// @lcpr case=end

// @lcpr case=start
// "1010"\n"1011"\n
// @lcpr case=end

 */

