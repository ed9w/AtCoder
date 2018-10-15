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

    int cnt = std::count(s.begin(), s.end(), 'o');
    std::cout<<(700 + 100 * cnt)<<std::endl;
    return 0;
}
