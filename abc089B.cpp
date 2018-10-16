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
    std::vector<std::string> s(n);
    for(auto i = s.begin();i != s.end();i++){
        std::cin>>*i;
    }

    std::string ans = "Three";
    for(auto i = s.begin();i != s.end();i++){
        if((*i).find("Y") != std::string::npos){
            ans = "Four";
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
