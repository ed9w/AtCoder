#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    char a, b;
    std::cin>>a>>b;

    std::string ans;
    if(a < b){
        ans = "<";
    }else if(a > b){
        ans = ">";
    }else{
        ans = "=";
    }

    std::cout<<ans<<std::endl;
    return 0;
}
