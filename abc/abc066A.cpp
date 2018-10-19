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
    for(int i = 0;i < 3;i++){
        std::cin>>v[i];
    }

    std::sort(v.begin(), v.end());
    std::cout<<v[0] + v[1]<<std::endl;
    return 0;
}
