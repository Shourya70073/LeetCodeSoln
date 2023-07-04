class BrowserHistory {
public:
    list<string>history;
    list<string>::iterator it;
    BrowserHistory(string homepage) {
          history.push_back(homepage);
          it=history.begin();
    }
    
    void visit(string url) {
        auto e=it;
        
        e++;
        history.erase(e,history.end());
        history.push_back(url);
        it++;
    }
    
    string back(int steps) {
        while(it!=history.begin() && steps!=0){
            steps--;
            it--;
        }
        return *it;
    }
    
    string forward(int steps) {
         while(it!= --history.end() && steps!=0){
            steps--;
            it++;
        }
        return *it;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */