class MyHashMap {
public:
    vector<int>vt;
    int size;
    MyHashMap() {
        int size=10e6+1;
        vt.resize(size,-1);
        
    }
    
    void put(int key, int value) {
        vt[key]=value;
    }
    
    int get(int key) {
        return vt[key];
    }
    
    void remove(int key) {
        vt[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */