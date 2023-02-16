class Solution {
public:

string transform(string s)
{
    char curr = s[0];
    int curr_freq = 1;
    string ans = "";
    
    for (int i = 1; i < s.length(); i++)
    {
       
        if (s[i] == curr)   
        {    
            curr_freq++;
        }
        else
        {
           
            
            ans += (char)(curr_freq + '0'); 
            ans += (char)(curr);    
            curr = s[i];
            curr_freq = 1;
        }
    }
  
    
    ans += (char)(curr_freq + '0');
    ans += (char)(curr);
    
    return ans;
}

string countAndSay(int n) {
    if (n == 1)
        return "1";
    
  
    
    string x = transform(countAndSay(n-1));
    
    return x;
}
};