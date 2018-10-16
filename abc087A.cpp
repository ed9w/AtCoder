#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int x, a, b;
    std::cin>>x>>a>>b;

    std::cout<<((x - a) % b)<<std::endl;
    return 0;
}
