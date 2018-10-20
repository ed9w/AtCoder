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
    std::cin>>v[0]>>v[1]>>v[2];

    std::sort(v.begin(), v.end());
    int cnt = 0;
    int k1 = (v[2] - v[0]) / 2;
    int k2 = (v[2] - v[1]) / 2;
    cnt = k1 + k2;
    v[0] = v[0] + k1 * 2;
    v[1] = v[1] + k2 * 2;
    //std::cout<<v[0]<<v[1]<<v[2]<<std::endl;
    if((v[0] == v[1]) && (v[1] != v[2])){
        ++cnt;
    }else if(v[0] != v[1]){
        cnt+=2;
    }
    std::cout<<cnt<<std::endl;
    return 0;
}
