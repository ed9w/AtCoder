#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<long> A(N);

    for(auto i = A.begin();i != A.end();i++){
        std::cin>>*i;
    }

    int max = *std::max_element(A.begin(), A.end());
    int min = *std::min_element(A.begin(), A.end());

    std::cout<<max - min<<std::endl;

    return 0;
}
