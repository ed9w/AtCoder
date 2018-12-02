#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long long n;
    std::cin>> n;

    int k = 0;
    while(n > 0){
        n /= 10;
        k++;
    }
    
    return 0;
}
