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
    std::cin>>n;
    std::vector<int> t(n);
    for(int i = 0;i < n;i++){
        std::cin>>t[i];
    }
    std::cin>>m;
    std::vector<int> p(m), x(m);
    for(int i = 0;i < m;i++){
        std::cin>>p[i]>>x[i];
    }

    std::vector<int> ans(m);
    int sum = std::accumulate(t.begin(),t.end(), 0);
    for(int i = 0;i < m;i++){
        ans[i] = sum - t[p[i]-1] + x[i];
    }
    for(const auto& a : ans){
        std::cout<<a<<std::endl;
    }
    return 0;
}
