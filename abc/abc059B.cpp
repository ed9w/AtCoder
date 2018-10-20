#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string a, b;
    std::cin>>a>>b;

    std::string ans;
    if(a.size() < b.size()){
        ans = "LESS";
    }else if(a.size() > b.size()){
        ans = "GREATER";
    }else{
        for(int i = 0;i < a.size();i++){
            if((int)a[i] < (int)b[i]){
                ans = "LESS";
                break;
            }else if((int)a[i] > (int)b[i]){
                ans = "GREATER";
                break;
            }else{
                ans = "EQUAL";
            }
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
