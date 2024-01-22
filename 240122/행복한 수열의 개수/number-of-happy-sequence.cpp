#include <iostream>
using namespace std;

int n, m;
int ans;
int map[101][101];

void checkColumn(int y) {
    if (m == 1) {
        ans++;
        return;
    }

    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (map[i][y] == map[i + 1][y]) {
            count++;
            if (count >= m) {
                ans++;
                break;
            }
        } else {
            count = 1;
        }
    }
}

void checkRow(int x) {
    if (m == 1) {
        ans++;
        return;
    }

    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (map[x][i] == map[x][i + 1]) {
            count++;
            if (count >= m) {
                ans++;
                break;
            }
        } else {
            count = 1;
        }
    }
}

int main() {
    cin >> n >> m;
    ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    if (m == 1) {
        ans = 2 * n;
    } else {
        for (int i = 0; i < n; i++) {
            checkRow(i);
            checkColumn(i);
        }
    }

    cout << ans;
}