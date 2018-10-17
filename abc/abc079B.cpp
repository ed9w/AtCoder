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

    std::vector<long long> v;
    v.push_back(2);
    v.push_back(1);
    for(int i = 2;i <= n;i++){
        v.push_back(v[i - 2] + v[i - 1]);
    }

    std::cout<<v.back()<<std::endl;
    return 0;
}
