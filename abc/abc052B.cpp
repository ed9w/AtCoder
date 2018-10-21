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
    std::string s;
    std::cin>>n>>s;

    std::vector<int> v;
    v.push_back(0);
    for(int i = 0;i < s.size();i++){
        if(s[i] == 'I'){
            v.push_back(1);
        }else{
            v.push_back(-1);
        }
    }
    std::partial_sum(v.begin(), v.end(), v.begin());
    std::cout<<*std::max_element(v.begin(), v.end())
        <<std::endl;
    return 0;
}
