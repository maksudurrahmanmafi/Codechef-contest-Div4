#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    vector<int> dist(f + 1, -1); // distance array

    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        // reached goal
        if (cur == g) {
            cout << dist[cur] << "\n";
            return 0;
        }

        // move UP
        int up = cur + u;
        if (up <= f && dist[up] == -1) {
            dist[up] = dist[cur] + 1;
            q.push(up);
        }

        // move DOWN
        int down = cur - d;
        if (down >= 1 && dist[down] == -1) {
            dist[down] = dist[cur] + 1;
            q.push(down);
        }
    }

    cout << "use the stairs\n";
    return 0;
}