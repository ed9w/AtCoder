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
    std::vector<std::string> c(h);
    for(int i = 0;i < h;i++){
        std::cin>>c[i];
    }
    for(int i = 0;i < h;i++){
        std::cout<<c[i]<<std::endl;
        std::cout<<c[i]<<std::endl;
    }
    return 0;
}
