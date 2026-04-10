class MinStack {
public:
stack<long long>temp;
long long min_val=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        long long v=(long long)val;
        if(temp.empty()){
            temp.push(v);
            min_val=v;
        }
        else{
            if(v>min_val)temp.push(v);
            else{
                temp.push(2*v-min_val);
                min_val=v;
                }
        }
    }
    
    void pop() {
        if(temp.empty()) return;
        if(min_val>temp.top()){
            min_val=2*min_val-temp.top();
        }
        temp.pop();
    }
    
    int top() {
        if(temp.empty()) return -1;
        if(temp.top()<min_val){return (int)min_val;}
        return (int)temp.top();
    }
    
    int getMin() {
        return (int)min_val;
    }
};
