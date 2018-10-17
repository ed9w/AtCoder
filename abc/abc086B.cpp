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
    std::cin>>a>>b;

    int k = [](int n) -> int {
        if(n / 10 == 0){
            return 10;
        }else if(n / 10 == 10){
            return 1000;
        }else{
            return 100;
        }
    }(b) * a + b;
    std::string ans = "No";
    for(int i = 1;i <= 1000;i++){
        if(i * i == k){
            ans = "Yes";
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
