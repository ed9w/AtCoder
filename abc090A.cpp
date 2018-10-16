#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::vector<std::string> s(3);
    std::cin>>s[0]>>s[1]>>s[2];

    std::string ans = "";
    for(int i = 0;i < 3;i++){
        ans += std::string(1, s[i][i]);
    }
    std::cout<<ans<<std::endl;
    return 0;
}
