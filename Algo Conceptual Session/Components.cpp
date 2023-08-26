#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adj[N];
bool visited[N];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Since it's an undirected graph
    }

    vector<int> ans;
    
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bfs(i);
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (visited[j]) {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
