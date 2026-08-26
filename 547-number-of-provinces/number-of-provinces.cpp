class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<bool> visited(n, false);
        int count = 0;
        stack<int> st;

        for (int i = 0; i < n; i++) {

            if (!visited[i]) {

                count++;
                st.push(i);

                while (!st.empty()) {

                    int node = st.top();
                    st.pop();

                    if (visited[node])
                        continue;

                    visited[node] = true;

                    // Check every city connected to 'node'
                    for (int j = n - 1; j >= 0; j--) {

                        if (isConnected[node][j] == 1 && !visited[j]) {
                            st.push(j);
                        }
                    }
                }
            }
        }

        return count;
    }
};