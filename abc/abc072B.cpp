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

    std::string ans = "";
    for(int i = 0;i < s.size();i += 2){
        ans += s[i];
    }
    std::cout<<ans<<std::endl;
    return 0;
}
