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
    std::cin>>n;
    struct point{
        int x;
        int y;
        bool flag;
    };
    std::vector<point> r, b;
    for(int i = 0;i < n;i++){
        int x, y;
        std::cin>>x>>y;
        r.push_back({x, y, false});
    }
    for(int i = 0;i < n;i++){
        int x, y;
        std::cin>>x>>y;
        b.push_back({x, y, false});
    }

    std::sort(b.begin(), b.end(),
            [](point& a, point& b) -> bool {
                return a.x < b.x;
            });
    int cnt = 0;
    for(int i = 0;i < n;i++){
        int max = -1;
        for(int j = 0;j < n;j++){
            if(!r[j].flag && r[j].x < b[i].x &&
                    r[j].y < b[i].y){
                if(max == -1 || r[j].y > r[max].y){
                    max = j;
                }
            }
        }
        if(max != -1){
            r[max].flag = true;
            ++cnt;
        }
    }
    std::cout<<cnt<<std::endl;
    return 0;
}
