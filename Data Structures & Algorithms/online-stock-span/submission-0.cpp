class StockSpanner {
public:
    stack<pair<int,int>>temp;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
    while(!temp.empty() && temp.top().first<=price){
    span+=temp.top().second;
    temp.pop();
    }
    temp.push({price,span});
    return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */