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

    int ans = 1;
    for(int i = 0;i < n;i++){
        int k = pow(2, i);
        if(k > n){
            ans = k / 2;
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
