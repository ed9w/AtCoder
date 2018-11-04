#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <set>
#include <utility>

int main(){
    long n;
    std::cin >> n;
    std::vector<long> a(n);
    std::vector<long> cnt(n + 1, 0);
    int res = 0;
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
        if(a[i] > n){
            ++res;
        }else{
            cnt[a[i]]++;
        }
    }

    /*
    for(auto& x : cnt){
        std::cout << x << std::endl;
    }
    */

    for(int i = 1; i <= n; i++){
        if(cnt[i] < i){
            res += cnt[i];
        }else{
            res += cnt[i] - i;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
