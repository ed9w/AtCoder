#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int H, W;
    std::cin>>H>>W;
    std::vector<std::string> s(H);
    for(int i = 0;i < s.size();i++){
        std::cin>>s[i];
    }

    std::vector<std::vector<int>>
        v(H, std::vector<int>(W, 0));
    const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    for(int i = 0;i < H;i++){
        for(int j = 0; j < W;j++){
            if(s[i][j] == '#'){
                continue;
            }
            int n = 0;
            for(int d = 0;d < 8;d++){
                int ni = i + dy[d];
                int nj = j + dx[d];

                if(ni < 0 || H <= ni){
                    continue;
                }
                if(nj < 0 || W <= nj){
                    continue;
                }
                if(s[ni][nj] == '#'){
                    ++n;
                }
            }
            s[i][j] = char(n + '0');
        }
    }
    for(const auto& x : s){
        std::cout<<x<<std::endl;
    }
    return 0;
}
