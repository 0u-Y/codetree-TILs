#include <iostream>

using namespace std;

int n;


int main() {
    int dp[1001][2];
    dp[1][2] = 1;
    dp[2][2] = 2;

    cin>>n;

    for(int i=3; i<=n; i++){
        dp[i][2] = dp[i-1][2] + dp[i-2][2];
    }

    dp[n][2] %= 10007;

    cout<<dp[n][2];



}