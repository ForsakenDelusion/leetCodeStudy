// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=707 lang=cpp
 * @lcpr version=30204
 *
 * [707] 设计链表
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
class MyLinkedList
{
public:
    struct DList
    {
        int elem;
        DList *next;
        DList *prev;
        DList(int elem) : elem(elem), next(nullptr), prev(nullptr){};
    };

    MyLinkedList()
    {
        sentinelNode = new DList(0);
        sentinelNode->next = sentinelNode;
        sentinelNode->prev = sentinelNode;
        size = 0;
    }

    int get(int index)
    {
        if (index > (size - 1) || index < 0)
        {
            return -1;
        }
        int num;
        int mid = size >> 1;
        DList *curNode = sentinelNode;
        if (index < mid)
        {
            for (int i = 0; i < index + 1; i++)
            {
                curNode = curNode->next;
            }
        }
        else
        {
            for (int i = 0; i < size - index; i++)
            {
                curNode = curNode->prev;
            }
        }
        num = curNode->elem;
        return num;
    }

    void addAtHead(int val)
    {
        DList *newNode = new DList(val);
        DList *next = sentinelNode->next;
        newNode->prev = sentinelNode;
        newNode->next = next;
        size++;
        sentinelNode->next = newNode;
        next->prev = newNode;
    }

    void addAtTail(int val)
    {
        DList *newNode = new DList(val);
        DList *prev = sentinelNode->prev;
        newNode->next = sentinelNode;
        newNode->prev = prev;
        size++;
        sentinelNode->prev = newNode;
        prev->next = newNode;
    }

    void addAtIndex(int index, int val)
    {
        if (index > (size))
        {
            return;
        }
        if (index <= 0)
        {
            addAtHead(val);
            return;
        }
        int num;
        int mid = size >> 1;
        DList *curNode = sentinelNode;
        if (index < mid)
        {
            for (int i = 0; i < index; i++)
            {
                curNode = curNode->next;
            }
            DList *temp = curNode->next;
            DList *newNode = new DList(val);
            curNode->next = newNode;
            temp->prev = newNode;
            newNode->next = temp;
            newNode->prev = curNode;
        }
        else
        {
            for (int i = 0; i < size - index; i++)
            {
                curNode = curNode->prev;
            }
            DList *temp = curNode->prev;
            DList *newNode = new DList(val);
            curNode->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next = curNode;
        }
        size++;
    }

    void deleteAtIndex(int index)
    {
        if (index > (size - 1) || index < 0)
        {
            return;
        }
        int num;
        int mid = size >> 1;
        DList *curNode = sentinelNode;
        if (index < mid)
        {
            for (int i = 0; i < index; i++)
            {
                curNode = curNode->next;
            }
            DList *next = curNode->next->next;
            curNode->next = next;
            next->prev = curNode;
        }
        else
        {
            for (int i = 0; i < size - index - 1; i++)
            {
                curNode = curNode->prev;
            }
            DList *prev = curNode->prev->prev;
            curNode->prev = prev;
            prev->next = curNode;
        }
        size--;
    }

private:
    int size;
    DList *sentinelNode;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end
