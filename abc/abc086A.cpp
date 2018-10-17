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

    std::cout<<((a * b) % 2 == 1 ? "Odd" : "Even")
        <<std::endl;
    return 0;
}
