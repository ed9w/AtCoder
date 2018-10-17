#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n;
    std::cin>>n;

    std::string s = std::to_string(n);
    std::cout<<(s[0] == s[2] ? "Yes" : "No")<<std::endl;
    return 0;
}
