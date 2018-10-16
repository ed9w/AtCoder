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

    int l = a + b;
    int r = c + d;
    std::string ans;
    if(l < r){
        ans = "Right";
    }else if(l > r){
        ans = "Left";
    }else{
        ans = "Balanced";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
