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

    std::string ans = "No";
    std::string s = std::to_string(n);
    if((s[1] == s[2]) &&((s[0] == s[1]) || (s[2] == s[3]))){
        ans = "Yes";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
