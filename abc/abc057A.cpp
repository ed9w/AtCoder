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

    int res;
    if(a + b < 24){
        res = a + b;
    }else{
        res = a + b - 24;
    }
    std::cout<<res<<std::endl;
    return 0;
}
