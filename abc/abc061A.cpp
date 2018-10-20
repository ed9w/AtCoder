#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, c;
    std::cin>>a>>b>>c;

    std::string ans;
    if(a <= c && c <= b){
        ans = "Yes";
    }else{
        ans = "No";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
