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

    std::cout<<std::count(s.begin(), s.end(), '1')
        <<std::endl;
    return 0;
}
