#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<int> p(m), y(m);
    std::vector<std::vector<int>> vec(n + 1);
    for(int i = 0; i < m; i++){
        std::cin >> p[i] >> y[i];
        vec[p[i]].push_back(y[i]);
    }
    for(int i = 1; i <= n; i++){
        std::sort(vec[i].begin(), vec[i].end());
    }

    for(int i = 0; i < m; i++){
        auto itr = std::lower_bound(vec[p[i]].begin(), vec[p[i]].end(), y[i]);
        std::cout
            << std::setfill('0') << std::right << std::setw(6) << p[i]
            << std::setfill('0') << std::right << std::setw(6) << std::distance(vec[p[i]].begin(), itr) + 1
            << std::endl;
    }

    return 0;
}
