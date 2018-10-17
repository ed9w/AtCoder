#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int a, b, x;
    std::cin>>a>>b>>x;

    std::string ans = "NO";
    for(int i = 0;i <= b;i++){
        if(a + i == x){
            ans = "YES";
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
