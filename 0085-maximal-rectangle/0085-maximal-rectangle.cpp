class Solution {
public:
    
    vector<int> prevsmall(vector<int>& heights)
    {
        vector <int>left;
        stack <pair<int,int>>st;
        for(int  i=0;i<heights.size();i++)
        {
            while(!st.empty() && heights[i]<=st.top().first)
            {
                st.pop();
            }
            if(st.empty())
                left.push_back(-1);
            else
                left.push_back(st.top().second);
            st.push({heights[i],i});
        }
        return left;
    }
    
    vector<int> nextsmall(vector<int>& heights)
    {
        vector <int>right;
        stack <pair<int,int>>st;
        for(int  i=heights.size()-1;i>=0;i--)
        {
            while(!st.empty() && heights[i]<=st.top().first)
            {
                st.pop();
            }
            if(st.empty())
                right.push_back(heights.size());
            
            else
                right.push_back(st.top().second);
            
            st.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        
        return right;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int>t1=prevsmall(heights);
        vector<int>t2=nextsmall(heights);
        int area=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int  a=0;
            int l=heights[i];
            int b=t2[i]-t1[i]-1;
            if(t2[i]==-1){
                   b=heights.size()-1;
            }
            a=l*b;
            area=max(a,area);
        }
        return area;
    }
    
    
    int conv(char c){
        if(c=='1'){
            return 1;
        }
        return 0;
    }
    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int>t;
        for(int i=0;i<matrix[0].size();i++){
            t.push_back(0);
        }
        int area=INT_MIN;
        for(int i=0;i<matrix.size();i++){
            int a=0;
            for(int j=0;j<matrix[i].size();j++){
                
                int p=conv(matrix[i][j]);
                
                t[j]=t[j]+p;
                
                if(p==0)
                    t[j]=0;
                
            }
            a=largestRectangleArea(t);
            area=max(area,a);
        }
        return area;
    }
};