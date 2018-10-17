#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int d, n;
    std::cin>>d>>n;

    int ans = (n < 100 ? n : 101) * pow(10, 2 * d);
    std::cout<<ans<<std::endl;
    return 0;
}
