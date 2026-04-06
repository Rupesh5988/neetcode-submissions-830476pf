class MinStack {
public:
stack<int>temp;
vector<int>min_temp;
    MinStack() {
        
    }
    
    void push(int val) {
        temp.push(val);
 
       if(min_temp.size()==0) min_temp.push_back(val);
       else if(val<min_temp.back()){min_temp.push_back(val);}
        else min_temp.push_back(min_temp.back());
       
    }
    
    void pop() {
        temp.pop();
        min_temp.pop_back();
      
    }
    
    int top() {
        return temp.top();
    }
    
    int getMin() {
        return min_temp.back();
    }
};
