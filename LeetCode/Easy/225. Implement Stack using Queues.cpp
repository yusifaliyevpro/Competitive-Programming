// 225. Implement Stack using Queues
// https://leetcode.com/problems/implement-stack-using-queues/

#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
private:
    queue<int> A;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        A.push(x);
    }

    int pop()
    {
        A.pop();
    }

    int top()
    {
        A.back();
    }

    bool empty()
    {
        return A.empty();
    }
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */