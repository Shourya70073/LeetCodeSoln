class MinStack {
private:
    vector<pair<int,int>>vt;
   
public:
    MinStack() {
       
    }
    
    void push(int val) {
         if(vt.empty()){
            vt.push_back({val,val});
            return;
        }
        else{
            vt.push_back({val,min(val,vt.back().second)});
        }
    }
    
    void pop() {
        vt.pop_back();
    }
    
    int top() {
        return vt.back().first;
    }
    
    int getMin() {
       return vt.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */