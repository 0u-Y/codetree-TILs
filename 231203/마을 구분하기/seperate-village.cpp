#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool vis[26][26] = {0};
int map[26][26];
int cnt = 0;
vector<int> village_people;

void DFS(int a, int b) {
    for (int i = 0; i < 4; i++) {
        int nx = a + dx[i];
        int ny = b + dy[i];
        if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
        if (vis[nx][ny] == 1) continue;
        if (map[nx][ny] != 1) continue;
        vis[nx][ny] = 1;
        cnt++;
        DFS(nx, ny);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == 1 && vis[i][j] == 0) {
                cnt = 1;
                vis[i][j] = 1;
                DFS(i, j);
                village_people.push_back(cnt);
            }
        }
    }

    sort(village_people.begin(), village_people.end());

    cout << village_people.size() << '\n';
    for (int i = 0; i < village_people.size(); i++) {
        cout << village_people[i] << '\n';
    }

    return 0;
}