#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b;
    std::cin>>a>>b;

    std::cout<<((b - a) * (b - a + 1) / 2 - b)<<std::endl;
    return 0;
}
