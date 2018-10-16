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

    std::vector<int> v;
    for(int i = a; i<= b;i++){
        v.push_back(i);
    }
    int cnt = std::count_if(v.begin(), v.end(),
            [](int n) -> bool {
                int k = n;
                int res = 0;
                while(k > 0){
                    res = res * 10 + k % 10;
                    k /= 10;
                }
                return n == res;
            });
    std::cout<<cnt<<std::endl;
    return 0;
}
