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

    int left = 0;
    int right = 0;
    for(auto i = a.begin(); i != a.end();i++){
        if(*i < x){
            ++left;
        }
        if(*i > x){
            ++right;
        }
    }
    std::cout<<std::min(left, right)<<std::endl;
    return 0;
}
