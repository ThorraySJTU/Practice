// 模拟，超时，数据过60%
#include<iostream>
using namespace std;
const int N = 1010;
int a[N];
int f[N];
int main(){
    int n;
    cin >> n;
    // 输入n个值
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans = 0;
    int b = 1;
    while(b != n+1){
        // b的访问次数+1
        f[b] ++;
        // 移动次数+1
        ans ++;
        //cout<<b<<" "<<f[b]<<endl;
        // 如果b的访问次数为偶数
        if(f[b] % 2 == 0){
            b = b+1;
        }
        else{
            b = a[b];
        }
    }
    cout << ans;
    return 0;
}
