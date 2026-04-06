class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>temp;
        int i=0;
        while(i<tokens.size()){
            if(tokens[i]=="+"){
                int val1=0;  int val2=0;
                if(!temp.empty()) val2=temp.top(); temp.pop();
                if(!temp.empty()) val1=temp.top(); temp.pop() ;
                temp.push(val1+val2);
            }
            else if(tokens[i]=="-"){
                int val1=0;  int val2=0;
                if(!temp.empty()) val2=temp.top(); temp.pop();
                if(!temp.empty()) val1=temp.top(); temp.pop() ;
                temp.push(val1-val2);
            } 
            else if(tokens[i]=="*"){
                int val1=0;
                int val2=0;
                if(!temp.empty()) val2=temp.top(); temp.pop();
                if(!temp.empty()) val1=temp.top(); temp.pop() ;
                temp.push(val1*val2);
            }
            else if(tokens[i]=="/"){
                int val1=0;  int val2=0;
                if(!temp.empty()) val2=temp.top(); temp.pop();
                if(!temp.empty()) val1=temp.top(); temp.pop(); 
                temp.push(val1/val2);
            }
            else{
                int val=stoi(tokens[i]);
                temp.push(val);
            }
        i++;
        }
        return temp.top();
    }
};
