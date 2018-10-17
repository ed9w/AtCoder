#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, k;
    std::cin>>n>>k;
    std::vector<int> x(n);
    for(int i = 0;i < n;i++){
        std::cin>>x[i];
    }

    std::transform(x.begin(), x.end(),x.begin(),
            [&k](int x) -> int {
                return std::min(x, k -x) * 2;
            });

    std::cout<<std::accumulate(x.begin(),x.end(), 0)
        <<std::endl;
    return 0;
}
