#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    std::vector<int> cnt(n + 1, 0);
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
        ++cnt[a[i]];
    }

    cnt.erase(std::remove(cnt.begin(), cnt.end(), 0), cnt.end());
    std::sort(cnt.begin(), cnt.end());

    int res = 0;
    if(k >= cnt.size()){
        res = 0;
    }else{
        res = std::accumulate(cnt.begin(), cnt.begin() + cnt.size() - k, 0);
    }
    std::cout << res << std::endl;

    return 0;
}
