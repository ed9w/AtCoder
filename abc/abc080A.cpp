#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, a, b;
    std::cin>>n>>a>>b;

    std::cout<<std::min(a * n, b)<<std::endl;
    return 0;
}
