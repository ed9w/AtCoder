#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, x;
    std::cin>>n>>x;

    std::vector<int> m(n);
    for(auto i = m.begin();i != m.end();i++){
        std::cin>>*i;
    }

    int sum = std::accumulate(m.begin(), m.end(), 0);
    int min = *std::min_element(m.begin(), m.end());
    int cnt = n + (x - sum) / min;

    std::cout<<cnt<<std::endl;
    return 0;
}
