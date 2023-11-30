#include <iostream>

using namespace std;

int main() {
    int n;

    int dp[1001];
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    cin>>n;

    for(int i=4; i<=n; i++){
        dp[i] = dp[i-2] + dp[i-3];
        dp[i] %= 10007;
    }

    cout<<dp[n];
        // 여기에 코드를 작성해주세요.
    return 0;
}