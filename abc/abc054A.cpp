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

    std::string ans;
    if(a == b){
        ans = "Draw";
    }else if(a == 1 || (a > b && b != 1)){
        ans = "Alice";
    }else{
        ans = "Bob";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
