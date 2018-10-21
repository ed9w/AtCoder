#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, m;
    std::cin>>n>>m;
    std::vector<long long> a(n), b(n), c(m), d(m);
    for(int i = 0; i < n;i++){
        std::cin>>a[i]>>b[i];
    }
    for(int i = 0;i < m;i++){
        std::cin>>c[i]>>d[i];
    }

    std::vector<int> ans(n);
    for(int i = 0;i < n;i++){
        std::vector<long long> dist(m);
        for(int j = 0;j < m;j++){
            dist[j] = abs(a[i] - c[j]) + abs(b[i] - d[j]);
        }
        //std::cout<<"i:"<<i<<std::endl;
        //for(const auto& x : dist){
        //    std::cout<<x<<std::endl;
        //}

        ans[i] = std::distance(dist.begin(),
                std::min_element(dist.begin(), dist.end()))
            + 1;

    }

    //std::cout<<"---------------"<<std::endl;
    for(const auto& x : ans){
        std::cout<<x<<std::endl;
    }
    return 0;
}
