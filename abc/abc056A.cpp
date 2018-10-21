#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    char a, b;
    std::cin>>a>>b;

    char c = 'D';
    if((a == 'H' && b == 'H') || (a == 'D' && b == 'D')){
        c = 'H';
    }
    std::cout<<c<<std::endl;
    return 0;
}
