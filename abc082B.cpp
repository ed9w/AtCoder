#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    std::string s, t;
    std::cin>>s>>t;

    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end(), std::greater<>());

    std::string ans = "Yes";
    int n = std::min(s.size(), t.size());
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(s[i] < t[i]){
            break;
        }else if(s[i] > t[i]){
            ans = "No";
            break;
        }else{
            ++cnt;
        }
    }
    if(cnt == n && n == t.size()){
        ans = "No";
    }
    std::cout<<ans<<std::endl;
    return 0;
}
