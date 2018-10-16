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

    std::sort(a.begin(), a.end(), std::greater<>());
    for(int i = 1;i < a.size();i += 2){
        a[i] = -a[i];
    }
    std::cout<<std::accumulate(a.begin(), a.end(), 0)
        <<std::endl;
    return 0;
}
