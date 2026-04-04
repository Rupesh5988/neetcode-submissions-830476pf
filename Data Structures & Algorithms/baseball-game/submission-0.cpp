class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>temp;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){

                
                     int second=temp.top();
                    temp.pop();
                    int first=temp.top();
                    temp.pop();
                    int sum=first+second;
                    temp.push(first);
                    temp.push(second);
                    temp.push(sum);
                
            }
            else if(operations[i]=="D"){
                int temp1=temp.top();
                temp.push(temp1*2);
            }
            else if(operations[i]=="C"){
            temp.pop();
            }
            else{
                temp.push(stoi(operations[i]));
            }
        }
        int ans=0;
        while(!temp.empty()){
            ans+=temp.top();
            temp.pop();
        }
        return ans;
    }
};