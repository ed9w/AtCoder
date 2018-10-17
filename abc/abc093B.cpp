#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, k;
    std::cin>>a>>b>>k;

    std::vector<int> v;
    for(int i = 0;i < k;i++){
        if(a + i <= b){
            v.push_back(a + i);
        }
        if(b - i >= a){
            v.push_back(b - i);
        }
    }
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(),v.end()), v.end());

    for(auto i = v.begin();i != v.end();i++){
        std::cout<<*i<<std::endl;
    }
    return 0;
}
