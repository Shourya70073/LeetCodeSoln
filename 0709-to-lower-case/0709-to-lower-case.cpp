class Solution {
public:
    string toLowerCase(string s1) {
       transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        return s1;
    }
};