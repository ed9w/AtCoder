#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> a(n + 1);
    for(int i = 1;i <= n;i++){
        std::cin>>a[i];
    }

    int cnt = 0;
    int j = 1;
    for(int i = 1;i <= n;i++){
        j = a[j];
        ++cnt;
        if(j == 2){
            break;
        }
    }
    std::cout<<(cnt == n ? -1 : cnt)<<std::endl;
    return 0;
}
