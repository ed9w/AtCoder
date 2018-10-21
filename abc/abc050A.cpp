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
    char op;
    std::cin>>a>>op>>b;

    std::cout<<(op == '+' ? a + b : a - b)<<std::endl;
    return 0;
}
