// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=146 lang=cpp
 * @lcpr version=30204
 *
 * [146] LRU 缓存
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
class LRUCache {
public:
    unordered_map<int, int> Cache;
    deque<int> LRUKey;
    int cap;

    LRUCache(int capacity) {
       cap = capacity;
    }
    
    int get(int key) {
        auto it = Cache.find(key);
        if (it != Cache.end()) {
            // 元素存在
            int value = it->second;
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        auto it = Cache.find(key);
        if (it != Cache.end()) {
            // 元素存在
            int value_of_key = it->second;
            if (value_of_key != value) {
                it->second = value;
            }
        } else {
            // 元素不存在，要使用LRU算法了

            // 容量还够直接新增
            if (LRUKey.size() < cap) {
                LRUKey.push_front(key);
                Cache.emplace(key,value);
            } else {
                // 容量不够，需要LRU
                int pop_key = LRUKey.back();
                LRUKey.pop_back();
                Cache.erase(pop_key);
                LRUKey.push_front(key);
                Cache.emplace(key,value);
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end



