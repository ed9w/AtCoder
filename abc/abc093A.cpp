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

    std::string ans = "Yes";
    for(char c = 'a';c <= 'c';c++){
        if(s.find(c) == std::string::npos){
            ans = "No";
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
