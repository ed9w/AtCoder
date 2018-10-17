#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string s;
    std::cin>>s;

    s.replace(3, 1, "8");
    std::cout<<s<<std::endl;
    return 0;
}
