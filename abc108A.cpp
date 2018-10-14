#include <iostream>

int main(){
    int N;
    std::cin>>N;

    int even = N / 2;
    int odd = (N + 1) / 2;
    std::cout<<(even * odd)<<std::endl;
    return 0;
}
