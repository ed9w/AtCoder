#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long long x, a, b;
    std::cin>>x>>a>>b;

    std::string ans;
    if(b <= a){
        ans = "delicious";
    }else if(b <= a + x){
        ans = "safe";
    }else{
        ans = "dangerous";
    }

    std::cout<<ans<<std::endl;
    return 0;
}
