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

    std::cout<<s[0] + std::to_string(s.size() - 2) +
        s[s.size() -1]<<std::endl;
    return 0;
}
