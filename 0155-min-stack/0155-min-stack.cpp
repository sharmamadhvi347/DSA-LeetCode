// best sol so far:: loved it: like using 2 places in stack to store current and min till now, this way we dont ahve to create another stack to keep track of min

//class MinStack {
// public:
//     stack<pair<int, int>> st;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if (!st.empty()) {
//             st.push({val, min(val, st.top().second)});
//         } else {
//             st.push({val, val});
//         }
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };

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
