#include <bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>> adj;
vector<int> tin, low;
int timer, ans;

void dfs(int u, int parentEdge) {
    tin[u] = low[u] = timer++;
    
    for(auto edge : adj[u]) {
        int v = edge.first;
        int id = edge.second;

        if(id == parentEdge) {
            continue;
        }

        if(tin[v] == -1) {
            dfs(v, id);

            low[u] = min(low[u], low[v]);

            if(low[v] > tin[u]) {
                ans++;
            }
        }
        else {
            low[u] = min(low[u], tin[v]);
        }
    }
}

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        adj.clear();
        adj.resize(n + 1);

        tin.assign(n + 1, -1);
        low.assign(n + 1, -1);

        timer = 0;
        ans = 0;

        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;

            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
        }

        dfs(1, -1);

        cout << ans << endl;
    }

    return 0;
}
