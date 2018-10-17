#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int A, B;
    std::cin>>A>>B;

    int max = std::max({A + B, A - B, A * B});
    std::cout<<max<<std::endl;
    return 0;
}
