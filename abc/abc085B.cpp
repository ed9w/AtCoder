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
    std::vector<int> d(n);
    for(auto i = d.begin();i != d.end();i++){
        std::cin>>*i;
    }

    std::sort(d.begin(), d.end());
    d.erase(std::unique(d.begin(), d.end()), d.end());

    std::cout<<d.size()<<std::endl;
    return 0;
}
