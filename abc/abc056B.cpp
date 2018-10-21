#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int w, a, b;
    std::cin>>w>>a>>b;

    int res;
    if(a + w <= b){
        res = b - (a + w);
    }else if(b + w <= a){
        res = a - (b + w);
    }else{
        res = 0;
    }
    std::cout<<res<<std::endl;
    return 0;
}
