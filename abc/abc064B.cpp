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
    for(int i = 0;i < n;i++){
        std::cin>>a[i];
    }

    std::sort(a.begin(), a.end(), std::greater<int>());
    int res = 0;
    for(int i = 0;i < n - 1;i++){
        res += a[i] - a[i + 1];

    }
    std::cout<<res<<std::endl;
    return 0;
}
