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
    if(b - a == c - b){
        ans = "YES";
    }else{
        ans = "NO";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
