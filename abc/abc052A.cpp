#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long long a, b,c, d;
    std::cin>>a>>b>>c>>d;

    std::cout<<std::max(a * b, c * d)<<std::endl;
    return 0;
}
