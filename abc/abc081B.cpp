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
    std::vector<int> a(n);
    for(auto i = a.begin();i != a.end();i++){
        std::cin>>*i;
    }

    int cnt = 0;
    while(std::count_if(a.begin(), a.end(),
                [](int x) -> bool {
                    return x % 2 == 1;
                    }) == 0){
        ++cnt;
        std::transform(a.begin(), a.end(), a.begin(),
                [](int x) -> int {
                    return x / 2;
                });
    }

    std::cout<<cnt<<std::endl;
    return 0;
}
