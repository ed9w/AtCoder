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

    std::string ans;
    int k = s.size();
    std::sort(s.begin(), s.end());
    s.erase(std::unique(s.begin(), s.end()), s.end());
    if(k == s.size()){
        ans = "yes";
    }else{
        ans = "no";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
