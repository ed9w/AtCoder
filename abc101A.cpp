#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string S;
    std::cin>>S;

    int p = std::count(S.begin(), S.end(), '+');
    int n = std::count(S.begin(), S.end(), '-');

    std::cout<<p - n<<std::endl;
    return 0;
}
