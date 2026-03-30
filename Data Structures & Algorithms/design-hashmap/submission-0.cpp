class MyHashMap {
public:
    vector<vector<int>> temp;
    MyHashMap() {}
    
    void put(int key, int value) {
        
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i][0] == key) {
                temp[i][1] = value; // Update ALWAYS
                return;
            }
        }
        temp.push_back({key, value});
    }
    
    int get(int key) {
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i][0] == key) return temp[i][1];
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i][0] == key) { 
                swap(temp[i], temp.back());
                temp.pop_back();
                return;
            }
        }
    }
};
