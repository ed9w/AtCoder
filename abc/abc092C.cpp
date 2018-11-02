#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> a(n);

    a.push_back(0);
    for(int i = 1;i <= n;i++){
        std::cin>>a[i];
    }

    a.push_back(0);
    int s = 0;
    for(int i = 0; i < a.size(); i++){
        s += abs(a[i + 1] - a[i]);
    }
    std::vector<int> vec;
    for(int i = 1;i < a.size() - 1; i++){
        int k = s - abs(a[i] - a[i - 1]) - abs(a[i + 1] - a[i]) + abs(a[i + 1] - a[i - 1]);
        vec.push_back(k);
    }
    for(auto& x : vec){
        std::cout<<x<<std::endl;
    }
    return 0;
}
