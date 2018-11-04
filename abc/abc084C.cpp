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
    std::cin >> n;
    std::vector<int> c(n), s(n), f(n);
    for(int i = 0; i < n - 1; i++){
        std::cin >> c[i] >> s[i] >> f[i];
    }

    for(int i = 0; i < n - 1; i++){
        int res = 0;
        for(int j = i; j < n - 1; j++){
            if(res < s[j]){
                res = s[j];
            }else if(res % f[j] == 0){
            }else{
                res += f[j] - res % f[j];
            }
            res += c[j];
        }
        std::cout << res << std::endl;
    }
    std::cout<< 0 << std::endl;
    return 0;
}
