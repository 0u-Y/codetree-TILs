#include <iostream>

using namespace std;

int main() {
    int n;
    int dp[46];
    dp[1] = 1;
    dp[2] = 1;

    cin>>n;
    
    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n];
    // 여기에 코드를 작성해주세요.
    return 0;
}