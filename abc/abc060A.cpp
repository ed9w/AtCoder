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

    std::string ans = "NO";
    if(a[a.size() -1] == b[0] && b[b.size() - 1] == c[0]){
        ans = "YES";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
