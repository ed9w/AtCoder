#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int h, w;
    std::cin>>h>>w;
    std::vector<std::string> a(h);
    for(int i = 0;i < h;i++){
        std::cin>>a[i];
    }

    for(int i = 0;i < h;i++){
        a[i] = '#' + a[i] + '#';
    }

    std::string dec = "";
    for(int j = 0; j< w;j++){
        dec += '#';
    }
    dec += '#';
    dec += '#';

    std::cout<<dec<<std::endl;
    for(auto x : a){
        std::cout<<x<<std::endl;
    }
    std::cout<<dec<<std::endl;
    return 0;
}
