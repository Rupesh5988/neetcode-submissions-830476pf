class MyHashSet {
public:
vector<int>temp;
    MyHashSet() {
        
    }
    
    void add(int key) { 
        if(!contains(key))  temp.push_back(key);
       
    }
    
    void remove(int key) {
        for(int i=0;i<temp.size();i++){
            if(temp[i]==key){
                if(i==temp.size()-1) {temp.pop_back(); break;}
                else {swap(temp[i],temp[temp.size()-1]); temp.pop_back(); break;}

        }
    }}
    
    bool contains(int key) {
        for(int i=0;i<temp.size();i++){
            if(temp[i]==key){return true;}}
    
    return false;}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */