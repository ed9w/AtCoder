#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n;
    std::cin>>n;

    long long N = 1000000000 + 7;
    long long res = 1;
    for(int i = 1;i <= n;i++){
        res *= i;
        if(res > N){
            res = res % N;
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}
