#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, c;
    std::cin>>a>>b>>c;

    std::string ans = "NO";
    for(int i = 1;i <= b;i++){
        if((a * i) % b == c){
            ans = "YES";
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
