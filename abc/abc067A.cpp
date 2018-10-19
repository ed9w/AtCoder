#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b;
    std::cin>>a>>b;

    std::string ans = "Impossible";
    if(a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0){
        ans = "Possible";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
