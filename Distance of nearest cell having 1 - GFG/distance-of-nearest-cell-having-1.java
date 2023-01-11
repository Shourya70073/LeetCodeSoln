//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String[] s = br.readLine().trim().split(" ");
            int n = Integer.parseInt(s[0]);
            int m = Integer.parseInt(s[1]);
            int[][] grid = new int[n][m];
            for(int i = 0; i < n; i++){
                String[] S = br.readLine().trim().split(" ");
                for(int j = 0; j < m; j++){
                    grid[i][j] = Integer.parseInt(S[j]);
                }
            }
            Solution obj = new Solution();
            int[][] ans = obj.nearest(grid);
            for(int i = 0; i < ans.length; i++){
                for(int j = 0; j < ans[i].length; j++){
                    System.out.print(ans[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}
// } Driver Code Ends

class Pair{
    int x;
    int y;
    Pair(int x, int y){
        this.x = x;
        this.y = y;
    }
}

class Solution
{
    //Function to find distance of nearest 1 in the grid for each cell.
    public int[][] nearest(int[][] grid)
    {
        // Code here
        int n = grid.length;
        int m = grid[0].length;
        int[][] ans = new int[n][m];
        boolean[][] visited = new boolean[n][m];
        Queue<Pair> queue = new LinkedList<>();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    visited[i][j] = true;
                    queue.offer(new Pair(i, j));
                }
            }
        }
        
        while(!queue.isEmpty()){
            int i = queue.peek().x;
            int j = queue.poll().y;
            
            if(i>0 && !visited[i-1][j]){
                visited[i-1][j] = true;
                ans[i-1][j] = ans[i][j]+1;
                queue.offer(new Pair(i-1, j));
            }
            if(i+1<n && !visited[i+1][j]){
                visited[i+1][j] = true;
                ans[i+1][j] = ans[i][j]+1;
                queue.offer(new Pair(i+1, j));
            }
            if(j>0 && !visited[i][j-1]){
                visited[i][j-1] = true;
                ans[i][j-1] = ans[i][j]+1;
                queue.offer(new Pair(i, j-1));
            }
           if(j+1<m && !visited[i][j+1]){
                visited[i][j+1] = true;
                ans[i][j+1] = ans[i][j]+1;
                queue.offer(new Pair(i, j+1));
           }
        }
        return ans;
    }
}