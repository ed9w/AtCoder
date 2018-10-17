#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, c, d;
    std::cin>>a>>b>>c>>d;

    int ans;
    if(b <= c){
        ans = 0;
    }else if(a <= c){
        if(b <= d){
            ans = b - c;
        }else{
            ans = d - c;
        }
    }else{
        if(b <= d){
            ans = b - a;
        }else if(a <= d){
            ans = d - a;
        }else{
            ans = 0;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
