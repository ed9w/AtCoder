#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int H, W, h, w;
    std::cin >> H >> W;
    std::cin >> h >> w;

    std::cout << (H - h) * (W - w) << std::endl;
    return 0;
}
