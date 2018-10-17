#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n;
    std::cin>>n;
    std::vector<std::string> s(n);
    for(int i = 0;i < n;i++){
        std::cin>>s[i];
    }
    int m;
    std::cin>>m;
    std::vector<std::string> t(m);
    for(int i = 0;i < m;i++){
        std::cin>>t[i];
    }

    std::vector<std::string> u;
    std::copy(s.begin(), s.end(), back_inserter(u));
    std::copy(t.begin(), t.end(), back_inserter(u));
    std::sort(u.begin(), u.end());
    u.erase(std::unique(u.begin(), u.end()), u.end());

    int total = 0;
    for(auto i = u.begin();i != u.end();i++){
        int k = 0;
        for(auto j = s.begin();j != s.end();j++){
            if(*i == *j){
                ++k;
            }
        }
        for(auto j = t.begin();j != t.end();j++){
            if(*i == *j){
                --k;
            }
        }
        if(total < k){
            total = k;
        }
    }
    std::cout<<total<<std::endl;
    return 0;
}
