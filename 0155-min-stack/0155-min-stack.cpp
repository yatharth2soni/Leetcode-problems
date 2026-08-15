class MinStack {
public:
    stack<int>s,ss;
    //ss->min element,s->stack operation//
    MinStack() {}
    
    void push(int value) {
        s.push(value);
        if(ss.size()==0||ss.top()>=value){
            ss.push(value);
        }
    }    
    
    void pop() {
        int k=s.top();
        s.pop();

        if(k==ss.top()){
            ss.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */