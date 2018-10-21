#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int k, s;
    std::cin>>k>>s;

    int cnt = 0;
    for(int x = 0;x <= k;x++){
        for(int y = x; y <= k;y++){
            for(int z = y;z <= k;z++){
                if(x + y + z == s){
                    if(x == y && y == z){
                        cnt += 1;
                    }else if(x != y && y != z){
                        cnt += 6;
                    }else{
                        cnt += 3;
                    }
                }
            }
        }
    }
    std::cout<<cnt<<std::endl;
    return 0;
}
