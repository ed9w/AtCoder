#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, c;
    std::cin>>a>>b>>c;

    int ans;
    if(a == b){
        ans = c;
    }else if(a == c){
        ans = b;
    }else{
        ans = a;
    }
    std::cout<<ans<<std::endl;
    return 0;
}
