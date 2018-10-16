#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, d, x;
    std::cin>>n>>d>>x;
    std::vector<int> a(n);
    for(int i = 0;i <a.size();i++){
        std::cin>>a[i];
    }

    std::transform(a.begin(), a.end(), a.begin(),
            [d](int k) -> int {return (d-1) / k + 1;});

    std::cout<<x + std::accumulate(a.begin(), a.end(), 0)
        <<std::endl;
    return 0;
}
