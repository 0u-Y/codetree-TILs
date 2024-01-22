#include <iostream>
using namespace std;

int n, m;
int ans;
int map[101][101];

void checkColumn(int y) {
    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (map[i][y] == map[i + 1][y]) {
            count++;
        } else {
            count = 1;
        }
        if (count >= m) {
            ans++;
            break;
        }
    }
}

void checkRow(int x) {
    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (map[x][i] == map[x][i + 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count >= m) {
            ans++;
            break;
        }
    }
}

int main() {
    cin >> n >> m;
    ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[j][i];
        }
    }

    for (int i = 0; i < n; i++) {
        checkColumn(i); // Checking each column
        checkRow(i);    // Checking each row
    }

    cout << ans;
}