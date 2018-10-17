#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::vector<int> v(3);
    int k;
    std::cin>>v[0]>>v[1]>>v[2]>>k;

    for(int i = 0;i < k;i++){
        auto itr = std::max_element(v.begin(), v.end());
        *itr = *itr * 2;
    }
    std::cout<<std::accumulate(v.begin(), v.end(), 0)<<std::endl;
    return 0;
}
