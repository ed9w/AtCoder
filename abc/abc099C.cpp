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

    int res = n;
    for(int i = 0;i <= n;i++){
        int k = 0;
        int c = i;
        while(c > 0){
            k += c % 6;
            c /= 6;
        }
        c = n - i;
        while(c > 0){
            k += c % 9;
            c /= 9;
        }

        if(res > k){
            res = k;
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}
