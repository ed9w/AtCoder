#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long long n, m;
    std::cin>>n>>m;

    long long res;
    if(n == 1 && m == 1){
        res = 1;
    }else if(n == 1 && m != 1){
        res = m - 2;
    }else if(n != 1 && m == 1){
        res = n - 2;
    }else{
        res = (n - 2) * (m - 2);
    }
    std::cout<<res<<std::endl;
    return 0;
}
