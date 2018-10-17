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

    std::cout<<(n % [](int k) -> int {
            int res = 0;
            while(k > 0){
                res += k % 10;
                k /= 10;
            }
            return res;
    }(n) == 0 ? "Yes" : "No")<<std::endl;
    return 0;
}
