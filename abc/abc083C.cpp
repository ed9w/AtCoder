#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long long x, y;
    std::cin >> x >> y;

    int i = 0;
    while(x <= y){
        ++i;
        x *= 2;
    }
    std::cout << i << std::endl;
    return 0;
}
