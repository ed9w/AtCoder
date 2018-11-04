#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> a(2, std::vector<int>(n, 0));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            std::cin >> a[i][j];
        }
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        int up = std::accumulate(a[0].begin(), a[0].end() - n + i + 1, 0);
        int dw = std::accumulate(a[1].begin() + i, a[1].end(), 0);
        if(res < up + dw){
            res = up +dw;
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}
