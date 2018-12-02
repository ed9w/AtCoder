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

    int res = 999;
    int tar = 753;
    for(int i = 0; i < s.size() - 2; i++){
        int k = std::stoi(s.substr(i, 3));
        if(std::abs(tar - k) < res){
            res = std::abs(tar - k);
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}
