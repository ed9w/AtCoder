#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, a;
    std::cin>>n>>a;

    std::cout<<((n % 500) <= a ? "Yes" : "No")
        <<std::endl;
    return 0;
}
