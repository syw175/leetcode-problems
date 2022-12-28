#include <iostream>
#include <stack>

using namespace std;

class MinStack {
public:
    stack<int> *minStk;
    stack<int> *stk;

    MinStack() {
        stk = new stack<int>();
        minStk = new stack<int>();
    }
    
    void push(int val) {
        if (stk->empty())
        {
            stk->push(val);
            minStk->push(val);
        }
        else
        {
            if (val < minStk->top())
                minStk->push(val);
            else
                minStk->push(minStk->top());
            stk->push(val);
        }
    }
    
    void pop() {
        stk->pop();
        minStk->pop();
    }
    
    int top() {
        return stk->top();
    }
    
    int getMin() {
        return minStk->top();
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */