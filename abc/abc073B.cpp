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
    std::vector<int> l(n), r(n);
    for(int i = 0;i < n;i++){
        std::cin>>l[i]>>r[i];
    }

    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += r[i] - l[i] + 1;
    }
    std::cout<<sum<<std::endl;
    return 0;
}
