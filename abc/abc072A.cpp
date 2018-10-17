#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int x, t;
    std::cin>>x>>t;

    std::cout<<(x - t >= 0 ? x - t : 0)<<std::endl;
    return 0;
}
