class MinStack {
public:
    stack <int> minStack;
    stack <int> st;

    MinStack() {
        st.push(2147483647);
    }
    
    void push(int val) {
        minStack.push(val);
        if(val<=st.top()) st.push(val);
        return ;
    }
    
    void pop() {
        if(minStack.empty() == 1) return ;
        if(st.top() == minStack.top()) st.pop();
        minStack.pop();
        return ;
    }
    
    int top() {
        if(minStack.empty() == 1) return NULL;
        return minStack.top();
    }
    
    int getMin() {
        if(st.empty()==0)return st.top();
        return NULL;
    }
};
