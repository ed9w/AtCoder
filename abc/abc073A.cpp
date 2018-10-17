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
    std::string ans  = "Yes";
    if(s.find('9') == std::string::npos){
        ans = "No";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
