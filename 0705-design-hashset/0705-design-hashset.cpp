class MyHashSet {
public:
    vector<list<int>>vt;
    int size;
    MyHashSet() {
        size=100;
        vt.resize(100);
    }
    
    int hash(int key){
       return key%size;
    }
    
    void add(int key) {
        int i=hash(key);
        if(!contains(key))
          vt[i].push_back(key);
        else 
            return;
    }
   
    void remove(int key) {
        
        if(contains(key)==1){
            int i=hash(key);
            list<int> :: iterator it=find(vt[i].begin(),vt[i].end(),key);
            vt[i].erase(it);
        }
        else{
            return;
        }
                        
    }
    
    bool contains(int key) {
        int i=hash(key);
        if(find(vt[i].begin(),vt[i].end(),key)!=vt[i].end()){
          return 1;
        }
        else{
         return 0;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */