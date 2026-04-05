class MyQueue {
public:
stack<int>temp1;
stack<int>temp2;
    MyQueue() {
        
    }
    
    void push(int x) {
        temp1.push(x);
    }
    
    int pop() {
        while(!temp1.empty() && temp1.size()>1){
          temp2.push(temp1.top());
          temp1.pop();
        }
        int ans=temp1.top();
        temp1.pop();
        while(!temp2.empty()){
          temp1.push(temp2.top());
          temp2.pop();
        }
      return ans;
    }
    
    int peek() {
        while(!temp1.empty() && temp1.size()>1){
          temp2.push(temp1.top());
          temp1.pop();
        }
        int ans=temp1.top();
        temp2.push(temp1.top());
        temp1.pop();
        while(!temp2.empty()){
          temp1.push(temp2.top());
          temp2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return temp1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */