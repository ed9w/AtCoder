#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int N;
    std::cin>>N;

    std::string ans = (N < 1000) ? "ABC" : "ABD";

    std::cout<<ans<<std::endl;

    return 0;
}
