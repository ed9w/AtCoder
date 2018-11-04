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
    std::vector<int> t(n);
    std::vector<int> x(n);
    std::vector<int> y(n);
    for(int i = 0; i < n; i++){
        std::cin >> t[i] >> x[i] >> y[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int dist;
        int k;
        if(i == 0){
            dist = abs(x[0] + y[0]);
            k = t[0];
        }else{
            dist = abs((x[i] - x[i - 1]) + (y[i] - y[i - 1]));
            k = t[i] - t[i - 1];
        }
        //std::cout << "dist:" << dist << " k:"<< k << std::endl;
        if(k < dist){
            break;
        }else{
            if(k % 2 == 0 && dist % 2 == 0 || k % 2 == 1 && dist % 2 == 1){
                ++cnt;
            }else{
                break;
            }
        }
    }

    std::cout << (cnt == n ? "Yes" : "No") << std::endl;
    return 0;
}
