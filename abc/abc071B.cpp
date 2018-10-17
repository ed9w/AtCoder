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

    std::string ans = "None";
    std::sort(s.begin(), s.end());
    for(char c = 'a'; c <= 'z';c++){
        if(s.find(c) == std::string::npos){
            ans = c;
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
