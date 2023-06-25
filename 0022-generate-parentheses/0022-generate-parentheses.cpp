class Solution {
public:
      vector<string> generatePparenthesis(int n) {
       if(n==1){
           vector<string>temp;
           temp.push_back("()");
           return temp;
       }
       vector<string>sans=generateParenthesis(n-1);
       vector<string>fans;
       for(int i=0;i<sans.size();i++){
           string temp=sans[i];
           for(int j=0;j<temp.size();j++){
           
                  string temp1=temp;
                  temp1.insert(j,"()");
                  fans.push_back(temp1);
              
               
           }
       }
       return fans;
      }
    vector<string> generateParenthesis(int n) {
    
        vector<string>a=generatePparenthesis(n);
        set<string>s;
        for(auto i:a){
          s.insert(i);
        }
        vector<string>fans;
        for(auto i:s){
            fans.push_back(i);
        }
        return fans;
       
    }
};