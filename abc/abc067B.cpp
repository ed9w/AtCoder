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
    std::vector<int> l(n);
    for(int i = 0;i < n;i++){
        std::cin>>l[i];
    }

    std::sort(l.begin(), l.end(), std::greater<int>());
    int sum = 0;
    for(int i = 0;i < k;i++){
        sum += l[i];
    }
    std::cout<<sum<<std::endl;
    return 0;
}
