#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int h, w;
    std::cin>>h>>w;
    std::vector<std::string> s(h);
    for(int i = 0; i < h;i++){
        std::cin>>s[i];
    }

    int cnt = 0;
    for(int i = 1;i < h - 1;i++){
        for(int j = 1;j < w - 1;j++){
            if(s[i][j] == '#' && s[i-1][j] == '.' &&
                    s[i][j-1] == '.' && s[i][j+1] == '.' &&
                    s[i+1][j] == '.'){
                ++cnt;
            }
        }
    }
    if(s[0][0] == '#' && s[1][0] == '.' && s[0][1] == '.'){
        ++cnt;
    }
    if(s[0][w-1] == '#' && s[0][w-2] == '.' && s[1][w-1] == '.'){
        ++cnt;
    }
    if(s[h-1][0] == '#' && s[h-2][0] == '.' && s[h-1][1] == '.'){
        ++cnt;
    }
    if(s[h-1][w-1] == '#' && s[h-1][w-2] == '.' && s[h-2][w-1] == '.'){
        ++cnt;
    }
    std::cout<<(cnt == 0 ? "Yes" : "No")<<std::endl;
    return 0;
}
