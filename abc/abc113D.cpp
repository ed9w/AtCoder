#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int h, w, k;
    long long MOD = 1000000007;
    long long c[9] = {1, 1, 2, 3, 5, 8, 13, 21, 34};

    std::cin >> h >> w >> k;

    long long dp[200][200] = {};
    dp[0][1] = 1;
    for(int i = 0; i < h; i++){
        for(int j = 1; j <= w; j++){
            dp[i + 1][j] += dp[i][j] * c[j - 1] % MOD *c[w - j] % MOD;
            dp[i + 1][j] %= MOD;

            if(j - 1 >= 1){
                dp[i + 1][j - 1] += dp[i][j] * c[j - 2] % MOD * c[w - j] % MOD;
                dp[i + 1][j - 1] %= MOD;
            }

            if(j + 1 <= w){
                dp[i + 1][j + 1] += dp[i][j] * c[j - 1] % MOD * c[w - (j + 1)] % MOD;
                dp[i + 1][j + 1] %= MOD;
            }
            //std::cout << "ij:" << i << j << ":" << dp[i][j] << std::endl;
        }
    }
    std::cout << dp[h][k] << std::endl;
    return 0;
}
