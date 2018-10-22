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

    std::vector<int> a(3);
    std::vector<int> b(3);
    for(int i =1; i <= 3;i++){
        a[i] = std::min(c[i][1], c[i][2], c[i][3]);
        b[i] = std::min(c[1][i], c[2][i], c[3][i]);
    }
    for(int i = 1;i <= 3;i++){
        for(int j = 1;j <= 3;j++){
            for(int x = 0;x <= a[i];x++){
                for(int y = 0;y <= b[j];y++){
                    if(x + y == c[i][j]){
                    }
                }
            }
        }
    }
    return 0;
}
