class Solution {
public:
    int compare(char a){
      if(a=='+' || a=='-') return 1;
      if(a=='*' || a=='/') return 2;
      return 0;
    }
    int calculate(string s) {
        stack<int>num;
        stack<char>operators;
        int i=0;
        while(i<s.length()){
            if(s[i]==' '){
                i++;
                continue;
            }
            else if(s[i]-'0'>=0 && s[i]-'0'<=9){
                long long val=0;
                while(i<s.length() && (s[i]-'0'>=0 && s[i]-'0'<=9)){
                    val=val*10+(s[i]-'0');
                    i++;
                }
                num.push((int)val);
            }
            else{
                while(!operators.empty() && compare(s[i])<=compare(operators.top())){
                    char tempa=operators.top();
                    operators.pop();
                    int a=num.top();
                    num.pop();
                    int b=num.top();
                    num.pop();
                    if(tempa=='+') num.push(b+a);
                    else if(tempa=='-') num.push(b-a);
                    else if(tempa=='*') num.push(b*a);
                    else num.push(b/a);
                }
                operators.push(s[i]);
                i++;
            }
        }
        while(!operators.empty()){
            char tempa=operators.top();
            operators.pop();
            int a=num.top();
            num.pop();
            int b=num.top();
            num.pop();
            if(tempa=='+') num.push(b+a);
            else if(tempa=='-') num.push(b-a);
            else if(tempa=='*') num.push(b*a);
            else num.push(b/a);
        }
        return num.top();
    }
};