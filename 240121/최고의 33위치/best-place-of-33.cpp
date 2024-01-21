#include <iostream>
#include <algorithm>
using namespace std;

int n;
int map[21][21];



int countCoins(int row, int col) {
    int count = 0;
    for (int i = row; i < row + 3; i++) {
        for (int j = col; j < col + 3; j++) {
            count += map[i][j];
        }
    }
    return count;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    int max_coins = 0;
    // 전체 격자를 3x3 격자로 탐색
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= n - 3; j++) {
            max_coins = max(max_coins, countCoins(i, j));
        }
    }

    cout << max_coins;
    return 0;
}