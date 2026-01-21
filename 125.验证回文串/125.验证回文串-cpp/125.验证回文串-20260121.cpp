/*
 * @lc app=leetcode.cn id=125 lang=cpp
 * @lcpr version=30204
 *
 * [125] 验证回文串
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
    bool isPalindrome(string s) {

        string proc;
        int i = 0;
        for(auto& it : s){
            if (it >= 'A' && it <= 'Z') {
                proc += (it + 32); // 大写转小写
            } else if ((it >= 'a' && it <= 'z') || (it >= '0' && it <= '9') ) {
                proc += it; // 小写或数字直接保留
            }
        }
        s = proc;
        reverse(proc.begin(),proc.end());
        cout << proc;
        for(int i = 0;i < s.size();i++){
            if(proc[i] != s[i]) return false;
        }
        return true;
        
    }
};
// @lc code=end



/*
// @lcpr case=start
// "A man, a plan, a canal: Panama"\n
// @lcpr case=end

// @lcpr case=start
// "race a car"\n
// @lcpr case=end

// @lcpr case=start
// " "\n
// @lcpr case=end

 */

