class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        // our logic is that we should find ther path  if it exisst , the
        vector<vector<int>> adj(n);
        // destination if possible exists?
        vector<int> visited(n, false);
        stack<int> st;
        for (auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        st.push(source);
        while (!st.empty()) {
            int node = st.top();
            st.pop();
            if (!visited[node]) {
                visited[node] = true;
            }
            if (node == dest) {
                return true;
            }
            for (int i = adj[node].size() - 1; i >= 0; i--) {
                int nei = adj[node][i];
                if (!visited[nei]) {
                    visited[nei] = true;
                    st.push(nei);
                }
            }
        }
        return false;
    }
};