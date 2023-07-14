class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()>1){
            int t=q1.front();
            q2.push(t);
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        
        while(q2.size()>0)
        {
            int t=q2.front();
            q1.push(t);
            q2.pop();
        }
        return ans;
    }
    
    int top() {
        while(q1.size()>1){
            int t=q1.front();
            q2.push(t);
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        q2.push(ans);
        while(q2.size()>0)
        {
            int t=q2.front();
            q1.push(t);
            q2.pop();
        }
        return ans;
    }
    
    bool empty() {
        if(q1.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */