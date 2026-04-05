class MyStack {
public:
        queue<int>temp1;
        queue<int>temp2;
    MyStack() {

    }
    
    void push(int x) {
        temp1.push(x);
    }
    
    int pop() {
        while(!temp1.empty() and temp1.size()>1){
          temp2.push(temp1.front());
          temp1.pop();
        }
        int ans=temp1.front();
        temp1.pop();
swap(temp1,temp2);
        return ans;
        
    }
    
    int top() {
       while(!temp1.empty() and temp1.size()>1){
          temp2.push(temp1.front());
          temp1.pop();
        }
        int ans=temp1.front();
        temp2.push(temp1.front());
        temp1.pop();
        swap(temp1,temp2);
        return ans; 
    }
    
    bool empty() {
        return temp1.empty();
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