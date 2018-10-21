#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::vector<std::vector<int>> c(3);
    for(int i = 1;i <= 3;i++){
        for(int j = 1;j <= 3;j++){
            std::cin>>c[i][j];
        }
    }
    return 0;
}
