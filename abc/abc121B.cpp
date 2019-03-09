#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int N, M, C;
    std::vector<int> B(100);
    std::vector<std::vector<int>> A(100, std::vector<int>(100 ,0));

    std::cin >> N >> M >> C;
    for(int i = 0; i < M; i++){
        std::cin >> B[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            std::cin >> A[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        int sum = C;
        for(int j = 0; j < M; j++){
            sum += A[i][j] * B[j];
        }

        if(sum > 0){
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
    return 0;
}
