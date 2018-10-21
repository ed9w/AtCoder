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

    int first = s.find('A');
    int end = s.rfind('Z');
    std::cout<<(end - first + 1)<<std::endl;
    return 0;
}
