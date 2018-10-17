#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b;
    std::string s;
    std::cin>>a>>b>>s;

    std::string ans = "Yes";
    if(s[a] != '-'){
        ans = "No";
    }else{
        s.erase(s.begin() + a);
        for(const auto x : s){
            if(x < '0' || '9' < x){
                ans = "No";
            }
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
