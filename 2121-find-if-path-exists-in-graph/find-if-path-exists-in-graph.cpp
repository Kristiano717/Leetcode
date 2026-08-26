class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        // our logic is that we should find ther path  if it exisst , the
        vector<vector<int>> adj(n);
        // destination if possible exists?
        vector<bool> visited(n, false);
        queue<int> q;
        for (auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
         visited[source] =true; 
            q.push(source);
        

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            if (!visited[node]) {
                visited[node] = true;
            }
            if (node == dest) {
                return true;
            }
            for (int nei : adj[node]) {
                if (!visited[nei]) {
                    visited[nei] = true;
                    q.push(nei);
                }
            }
        }
        return false;
    }
};