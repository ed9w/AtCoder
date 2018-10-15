#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, c, d;
    std::cin>>a>>b>>c>>d;

    std::string ans;
    if(abs(c - a) <= d){
        ans = "Yes";
    }else if(abs(b - a) <=d && abs(c - b) <= d){
        ans = "Yes";
    }else{
        ans = "No";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
