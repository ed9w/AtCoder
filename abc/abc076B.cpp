#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, k;
    std::cin>>n>>k;

    int n_a = [](int n, int k) -> int {
        for(int i = 0;i <=n;i++){
            if(pow(2, i) > k){
                return i;
            }
        }
    }(n, k);
    std::cout<<(pow(2, n_a) + k * (n - n_a))<<std::endl;
    return 0;
}
