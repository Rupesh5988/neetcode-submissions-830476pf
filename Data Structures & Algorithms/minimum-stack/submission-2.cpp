class MinStack {
public:
stack<int>temp;
vector<int>min_temp;
int min_value=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        temp.push(val);
        min_value=min(min_value,val);
        min_temp.push_back(min_value);
    }
    
    void pop() {
        temp.pop();
        min_temp.pop_back();
       if(!min_temp.empty()) min_value=min_temp.back();
       else min_value=INT_MAX;
    }
    
    int top() {
        return temp.top();
    }
    
    int getMin() {
        return min_value;
    }
};
