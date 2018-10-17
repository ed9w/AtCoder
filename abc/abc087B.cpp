#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, c, x;
    std::cin>>a>>b>>c>>x;

    int cnt = 0;
    for(int i = 0;i <= a;i++){
        for(int j = 0;j <= b;j++){
            for(int k = 0;k <=c;k++){
                if(500 * i + 100 * j + 50 * k == x){
                    ++cnt;
                }
            }
        }
    }
    std::cout<<cnt<<std::endl;
    return 0;
}
