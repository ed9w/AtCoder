#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, m, x;
    std::cin>>n>>m>>x;
    std::vector<int> a(m);
    for(auto i = a.begin();i != a.end();i++){
        std::cin>>*i;
    }
    return 0;
}
