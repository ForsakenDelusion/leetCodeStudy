/*
 * @lc app=leetcode.cn id=707 lang=java
 * @lcpr version=30121
 *
 * [707] 设计链表
 */

// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
class MyLinkedList {
    class intNode {
        int elem;
        intNode nextNode;

        public intNode(int elem, intNode nextNode) {
            this.elem = elem;
            this.nextNode = nextNode;
        }
    }

    intNode sentinel;
    int size;

    public MyLinkedList() {
        sentinel = new intNode(205, null);
        size = 0;
    }

    public int get(int index) {
        intNode curNode = sentinel;
        if (index > size)
            return -1;
        for (int i = 0; i < index + 1; i++) {
            if (curNode.nextNode != null) {
                curNode = curNode.nextNode;
            } else {
                return -1;
            }

        }
        return curNode.elem;
    }

    public void addAtHead(int val) {
        sentinel.nextNode = new intNode(val, sentinel.nextNode);
        size += 1;
    }

    public void addAtTail(int val) {
        intNode curNode = sentinel;
        while (curNode.nextNode != null) {
            curNode = curNode.nextNode;
        }
        curNode.nextNode = new intNode(val, null);
        size += 1;
    }

    public void addAtIndex(int index, int val) {
        intNode curNode = sentinel;
        if (index == size ) {
            addAtTail(val);
        } else if (index <= size && index >= 0) {
            if (curNode.nextNode != null) {
                for (int i = 0; i < index; i++) {
                    curNode = curNode.nextNode;
                }
                curNode.nextNode = new intNode(val, curNode.nextNode);
                size += 1;
            }
        } else if (index > size) {
            return;
        }
        

    }

    public void deleteAtIndex(int index) {
        intNode curNode = sentinel;
        if (get(index) != -1) {
            for (int i = 0; i < index; i++) {
                curNode = curNode.nextNode;
            }
            curNode.nextNode = curNode.nextNode.nextNode;
            size -= 1;
        }

    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
// @lc code=end
