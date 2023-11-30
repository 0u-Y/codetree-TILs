#include <iostream>
#define X first
#define Y second

using namespace std;

int dx[2] = {1, 0};
int dy[2] = {0, -1};

bool vis[101][101] = {0};

int n, m;
int map[101][101];

void DFS(int a, int b) {
    for (int i = 0; i < 2; i++) {
        int nx = a + dx[i];
        int ny = b + dy[i];
        if (nx >= m || nx < 0 || ny >= n || ny < 0) continue;
        if (map[nx][ny] == 0 || vis[nx][ny] == 1) continue;
        if (nx == m - 1 && ny == n - 1) {
            cout << 1 << endl;
            return;
        }
        vis[nx][ny] = 1;
        DFS(nx, ny);
    }
}

int main() {
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    vis[0][0] = 1;
    DFS(0, 0);

    if (vis[m - 1][n - 1] == 0) {
        cout << 0 << endl;
    }

    return 0;
}