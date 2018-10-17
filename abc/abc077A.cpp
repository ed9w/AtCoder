#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string s, t;
    std::cin>>s>>t;

    std::string ans = "NO";
    if((s[0] == t[2]) && (s[1] == t[1]) && (s[2] == t[0])){
        ans = "YES";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
