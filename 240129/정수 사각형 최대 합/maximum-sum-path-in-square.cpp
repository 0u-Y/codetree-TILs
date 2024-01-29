#include <iostream>
#include <algorithm>
using namespace std;

int n;
int map[101][101];
int dp[101][101];

int main() {
    cin >> n;
    
    // 맵 입력 받기
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }

    // dp 배열 초기화
    dp[1][1] = map[1][1];
    
    // 첫 행 초기화
    for (int i = 2; i <= n; i++) {
        dp[i][1] = dp[i - 1][1] + map[i][1];
    }

    // 첫 열 초기화
    for (int j = 2; j <= n; j++) {
        dp[1][j] = dp[1][j - 1] + map[1][j];
    }

    // 나머지 dp 배열 채우기
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + map[i][j];
        }
    }

    // 결과 출력
    cout << dp[n][n];

    return 0;
}