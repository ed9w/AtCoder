#include <iostream>
#include <vector>
#include <numeric>

int main(){
    long long N;
    std::cin>>N;

    std::vector<int> d;
    long long k = N;
    while(k > 0){
        d.push_back(k % 10);
        k /= 10;
    }

    int sum = std::accumulate(d.begin(), d.end(), 0);
    std::cout<<(N % sum == 0 ? "Yes" : "No")<<std::endl;
    return 0;
}
