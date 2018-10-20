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

    return 0;
}
