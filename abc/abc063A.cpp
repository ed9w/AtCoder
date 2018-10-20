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

    if(a + b >= 10){
        std::cout<<"error"<<std::endl;
    }else{
        std::cout<<a + b<<std::endl;
    }
    return 0;
}
