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
    std::vector<int> a(m), b(m);
    for(int i = 0;i < m;i++){
        std::cin>>a[i]>>b[i];
    }

    std::vector<int> ans(n);
    for(int i = 0;i < n;i++){
        ans[i] = std::count(a.begin(), a.end(), i + 1) +
            std::count(b.begin(), b.end(), i + 1);
    }
    for(auto x : ans){
        std::cout<<x<<std::endl;
    }
    return 0;
}
