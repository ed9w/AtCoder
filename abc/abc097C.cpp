#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string s;
    int k;
    std::cin>>s;
    std::cin>>k;

    std::vector<std::string> v;
    int n = s.size();
    for(int i = 0;i < n;i++){
        for(int j = 1; j <= 5;j++){
            v.push_back(s.substr(i, j));
       }
    }
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());

    std::cout<<v[k -1]<<std::endl;
    return 0;
}
