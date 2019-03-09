#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

long long binary(long long x){
    long long ans = 0;
    for(long long i = 0; x > 0; i++){
        ans += (x % 2) * pow(10, i);
        x /= 2;
    }
    return ans;
}

long long decimal(long long x){
    long long ans = 0;
    for(long long i = 0; x > 0; i++){
        ans += (x % 10) * pow(2, i);
        x /= 10;
    }
    return ans;
}

int main(){
    long long A, B;
    std::cin >> A >> B;
    int num = B - A + 1;

    long long sum = 0;
    for(int i = 0; i < num; i++){
        sum += binary(A + i);
    }

    int c = 0;
    long long tmp = sum;
    std::cout << binary(A) << ":" <<  binary(B) << std::endl;
    std::cout << sum << std::endl;
    long long b_ans = 0;
    while(tmp > 0){
        if((tmp % 10) % 2 == 1){
            b_ans += pow(10, c);
        }else{
        }
        c++;
        tmp /= 10;
    }
    std::cout << b_ans << std::endl;
    std::cout << decimal(b_ans) << std::endl;
    return 0;
}
