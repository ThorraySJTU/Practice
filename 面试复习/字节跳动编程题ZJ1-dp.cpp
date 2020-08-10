#include<iostream>
using namespace std;
const int N = 1010;
int a[N];
int dp[N];
int main(){
    int n;
    cin >> n;
    // 输入n个值
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    // 奇数步的时候不会向后走，走到第i个位置的时候，第i-1的位置走过两次
    // 第一次到达第i-1位置时，会到达a[i-1]，从p[i-1]到i-1需要 dp[i-1] - dp[a[i-1]]步
    for(int i = 1; i <= n; i++){
        dp[i] = 2 * dp[i-1] - dp[a[i-1]] + 2;
    }
    cout << dp[n];
    return 0;
}
