#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int x, a, b;
    std::cin>>x>>a>>b;

    std::string ans;
    if(abs(x - a) > abs(x - b)){
        ans = 'B';
    }else{
        ans = 'A';
    }
    std::cout<<ans<<std::endl;
    return 0;
}
