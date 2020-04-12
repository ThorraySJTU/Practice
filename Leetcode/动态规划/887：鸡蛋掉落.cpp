class Solution {
public:
    int superEggDrop(int K, int N) {
        //f表示T次操作，而且有 K 个鸡蛋，那么我们能找到答案的最高的 N 是多少
        /*f[i][j]
        第i次扔，鸡蛋没碎，则对应f[i-1][j]，我们还剩j个鸡蛋，但是操作次数减1
                鸡蛋碎了，则对应f[i-1][j-1]，还剩j-1个鸡蛋，操作次数减1
        = f[i-1][j]（i-1次操作，j个鸡蛋）+f[i-1][j-1]+1
        */
        if(N == 1) return 1;
        vector<vector<int>> f(N+1, vector<int>(K+1));
        for(int i = 1; i < K+1; i++){
            //1次操作，i个鸡蛋，最高1层
            f[1][i] = 1;
        }
        int ans = 0;
        for(int i = 2; i < N+1; i++){
            for(int j = 1; j < K+1; j++){
                f[i][j] = 1 + f[i-1][j] + f[i-1][j-1];
            }
            if(f[i][K] >= N){
                    ans = i;
                    break;
            }
        }
        return ans;
    }
};
