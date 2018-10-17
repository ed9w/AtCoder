#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <stdio.h>

int main(){
    int n;
    std::cin>>n;

    int i = 1;
    while(true){
        if(i * i > n){
            std::cout<<(i - 1) * (i - 1)<<std::endl;
            break;
        }
        ++i;
    }
    return 0;
}
