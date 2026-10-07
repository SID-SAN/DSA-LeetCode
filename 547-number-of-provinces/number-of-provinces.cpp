class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int provinces = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                provinces++;

                vector<int> stack = {i};
                visited[i] = true;

                while (!stack.empty()) {
                    int city = stack.back();
                    stack.pop_back();

                    for (int neighbor = 0; neighbor < n; neighbor++) {
                        if (isConnected[city][neighbor] == 1 &&
                            !visited[neighbor]) {
                            visited[neighbor] = true;
                            stack.push_back(neighbor);
                        }
                    }
                }
            }
        }

        return provinces;
    }
};