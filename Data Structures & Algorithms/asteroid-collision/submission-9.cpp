class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> temp;
        int i = 0;
        while (i < asteroids.size()) {
           
            if (temp.empty()) {
                temp.push(asteroids[i]);
            } 
            else {
                int val = asteroids[i];
                if (val > 0) {
                    temp.push(val);
                } 
                else {
                 
                    if (!temp.empty() && temp.top() > 0) {
                       
                        while (!temp.empty() && temp.top() > 0 && temp.top() < abs(val)) {
                            temp.pop();
                        }
                        
                       
                        if (temp.empty() || temp.top() < 0) {
                            temp.push(val);
                        } 
                        else if (temp.top() == abs(val)) {
                            temp.pop(); // Both explode
                        }
                        
                    } 
                    else {
                        temp.push(val);
                    }
                }
            }
            i++;
        }
        
        vector<int> ans;
        while (!temp.empty()) {
            ans.push_back(temp.top());
            temp.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;    
    }
};