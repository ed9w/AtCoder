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

    while(s.size()){
        s.pop_back();
        if(s.size() % 2 == 1){
            continue;
        }
        int k = (int)(s.size() / 2);
        if(s.substr(0, k) == s.substr(k, k)){
            std::cout<<s.size()<<std::endl;
            break;
        }
    }
    return 0;
}
