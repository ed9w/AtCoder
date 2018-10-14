#include <iostream>

int main(){
    long long N;
    std::cin>>N;

    std::cout<<(N % 2 == 0 ? N : N * 2)<<std::endl;
    return 0;
}
