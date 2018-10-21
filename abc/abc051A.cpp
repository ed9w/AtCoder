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

    std::replace(s.begin(), s.end(), ',', ' ');
    std::cout<<s<<std::endl;
    return 0;
}
