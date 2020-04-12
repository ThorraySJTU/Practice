class Solution {
public:
    int superEggDrop(int K, int N) {
        //f��ʾT�β����������� K ����������ô�������ҵ��𰸵���ߵ� N �Ƕ���
        /*f[i][j]
        ��i���ӣ�����û�飬���Ӧf[i-1][j]�����ǻ�ʣj�����������ǲ���������1
                �������ˣ����Ӧf[i-1][j-1]����ʣj-1������������������1
        = f[i-1][j]��i-1�β�����j��������+f[i-1][j-1]+1
        */
        if(N == 1) return 1;
        vector<vector<int>> f(N+1, vector<int>(K+1));
        for(int i = 1; i < K+1; i++){
            //1�β�����i�����������1��
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
