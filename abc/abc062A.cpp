#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int x, y;
    std::cin>>x>>y;

    std::list<int> a = {4, 6, 9, 11};
    auto itrx = std::find(a.begin(), a.end(), x);
    auto itry = std::find(a.begin(), a.end(), y);
    std::string ans;
    if(x == 2 || y == 2){
        ans = "No";
    }else if((itrx == a.end() && itry == a.end()) ||
            (itrx != a.end() && itry != a.end())){
        ans = "Yes";
    }else{
        ans = "No";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
