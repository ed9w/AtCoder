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
    std::vector<std::vector<int>> f(n, std::vector<int>(0));
    std::vector<std::vector<int>> p(n, std::vector<int>(0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            std::cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 10; j++){
            std::cin >> p[i][j];
        }
    }


    return 0;
}
