#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, t, a;
    std::cin >> n;
    std::cin >> t >> a;
    std::vector<long long> h(n);

    std::vector<double> r;
    for(int i = 0; i < n; i++){
        std::cin >> h[i];
        double k = t - h[i] * 0.006;
        r.push_back(std::abs(a - k));
    }
    auto itr1 = std::min_element(r.begin(), r.end());
    auto ind = std::distance(r.begin(), itr1);
    std::cout << ind + 1 << std::endl;
    return 0;
}
