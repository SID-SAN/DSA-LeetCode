class MyStack {
public:
    queue<int> stk;
    MyStack() {
        
    }
    
    void push(int x) {
        stk.push(x);
        int sz = stk.size();
        for (int i = 0; i < sz - 1; ++i) {
            stk.push(stk.front());
            stk.pop();
        }
    }
    
    int pop() {
        int val=stk.front();
        stk.pop();
        return val;
    }
    
    int top() {
        return stk.front();
    }
    
    bool empty() {
        return stk.empty();
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