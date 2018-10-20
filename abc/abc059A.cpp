#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string a, b, c;
    std::cin>>a>>b>>c;

    char ch = 'A' - 'a';
    std::cout<<(char)(a[0] + ch)<<(char)(b[0] + ch)
        <<(char)(c[0] + ch)<<std::endl;

    return 0;
}
