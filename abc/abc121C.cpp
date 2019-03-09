#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int N, M;
    std::cin >> N >> M;
    std::vector<std::pair<long long, long long>> P(N);
    for(int i = 0; i < N; i++){
        long long A, B;
        std::cin >> A >> B;
        P[i] = std::make_pair(A, B);
    }
    std::sort(P.begin(), P.end());

    long long total_price = 0;
    long long residual_num = M;
    for(int i = 0; i < N; i++){
        if(residual_num <= 0){
            break;
        }
        long long price = P[i].first;
        long long num = P[i].second;

        if(residual_num >= num){
            total_price += price * num;
            residual_num -= num;
        }else{
            total_price += price * residual_num;
            residual_num -= residual_num;
        }
    }
    std::cout << total_price << std::endl;

    return 0;
}
