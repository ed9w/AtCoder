#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, a, b;
    std::cin>>n>>a>>b;

    int sum = 0;
    for(int i = 1;i <= n;i++){
        int d = [](int k) -> int {
                int res = 0;
                while(k > 0){
                    res += k % 10;
                    k /= 10;
                }
                return res;
        }(i);
        if(a <= d && d <= b){
            sum += i;
        }
    }
    std::cout<<sum<<std::endl;
    return 0;
}
