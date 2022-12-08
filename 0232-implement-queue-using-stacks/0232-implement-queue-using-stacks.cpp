class MyQueue {
public:
    stack<int>inp,op;

    void ppop(stack<int>&input,stack<int>&output){
        if(input.size()==1){
            int t=input.top();
            output.push(t);
            input.pop();
            return;
        }
        int k=input.top();
        input.pop();
        ppop(input,output);
        input.push(k);
        
    } 

    void peeky(stack<int>&input,stack<int>&output){
        if(input.size()==1){
            int t=input.top();
            output.push(t);
            
            return;
        }
        int k=input.top();
        input.pop();
        peeky(input,output);
        input.push(k);
        
    }

    MyQueue() {
        
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        ppop(inp,op);
        int t=op.top();
        op.pop();
        return t;
    }
    
    int peek() {
        peeky(inp,op);
        int t=op.top();

        return t;
    }
    
    bool empty() {
        return inp.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */