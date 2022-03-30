class MinStack {
public:
    stack<int>ans; 
    stack<int>mintop;
    MinStack() {
       
    }
    
    void push(int val) {
        ans.push(val);
        if(mintop.empty() or val<=mintop.top())
            mintop.push(val);
    }
    
    void pop() {
        int tmp=ans.top();
        ans.pop();
        if(!mintop.empty() and mintop.top()==tmp)
            mintop.pop();
    }
    
    int top() {
        return ans.top();
    }
    
    int getMin() {
        return mintop.top();
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