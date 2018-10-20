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
    std::vector<long long> x(n);
    for(int i = 0;i < n;i++){
        std::cin>>x[i];
    }

    std::vector<long long> y = x;
    std::sort(y.begin(), y.end());
    auto k = y.end() - (n / 2);
    for(int i = 0;i < n;i++){
        auto itr = std::lower_bound(y.begin(), y.end(),
                x[i]);
        if(itr < k){
            std::cout<<(*k)<<std::endl;
        }else{
            std::cout<<(*(k - 1))<<std::endl;
        }
    }

    return 0;
}
