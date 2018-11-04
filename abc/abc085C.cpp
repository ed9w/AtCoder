#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n, y;
    std::cin >> n >> y;

    std::string ans = "-1 -1 -1";
    for(int a = n; a >= 0; a--){
        for(int b = n - a; b >= 0; b--){
            int c = n - a - b;
            if(10000 * a + 5000 * b + 1000 * c == y){
                ans = std::to_string(a) + ' ' + std::to_string(b) + ' ' + std::to_string(c);
            }
        }
    }
    std::cout << ans <<std::endl;
    return 0;
}
