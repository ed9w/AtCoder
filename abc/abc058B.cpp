#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string o, e;
    std::cin>>o>>e;

    int s;
    int k;
    if(o.size() > e.size()){
        s = o.size();
        k = 1;
    }else if(o.size() == e.size()){
        s = o.size();
        k = 0;
    }else{
        s = e.size();
        k = -1;
    }

    std::string ans = "";
    for(int i = 0;i < s - 1;i++){
        ans += o[i];
        ans += e[i];
    }
    if(k == 1){
        ans += o[s - 1];
    }else if(k == -1){
        ans += e[s - 1];
    }else{
        ans += o[s - 1];
        ans += e[s - 1];
    }
    std::cout<<ans<<std::endl;
    return 0;
}
