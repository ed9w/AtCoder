#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::vector<std::vector<int>> c(3, std::vector<int>(3, 0));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cin>>c[i][j];
        }
    }
    int cnt = 0;
    for(int i = 1; i < 3; i++){
        int k = c[i][0] - c[0][0];
        if(c[i][1] == c[0][1] + k && c[i][2] == c[0][2] + k){
            ++cnt;
        }
    }
    std::cout<<(cnt == 2 ? "Yes" : "No")<<std::endl;
    return 0;
}
