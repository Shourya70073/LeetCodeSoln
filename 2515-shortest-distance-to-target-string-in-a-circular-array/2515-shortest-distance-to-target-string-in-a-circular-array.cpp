class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
         int n = words.size();
    vector<int> distance(n, -1); 
    distance[startIndex] = 0;  
    queue<int> queue; 
    queue.push(startIndex);  

    while (!queue.empty()) {  
        int ci = queue.front();  
        queue.pop();
        if (words[ ci] == target)  
            return distance[ci];

       
        for (int i = -1; i <= 1; i += 2) {
            int ni = (ci + i + n) % n;  
            if (distance[ni] == -1) {  
                distance[ni] = distance[ci] + 1;  
                queue.push(ni);  
            }
        }
    }

    return -1;  
    }
};