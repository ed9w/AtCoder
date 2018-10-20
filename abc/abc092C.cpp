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
    std::vector<int> a(n + 2);
    a.push_back(0);
    for(int i = 1;i <= n;i++){
        std::cin>>a[i];
    }
    a.push_back(0);
    for(auto x : a){
        std::cout<<x<<std::endl;
    }


    return 0;
}
