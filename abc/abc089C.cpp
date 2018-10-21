#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    long n;
    std::cin>>n;
    std::vector<std::string> s(n);
    for(int i = 0;i < n;i++){
        std::cin>>s[i];
    }

    char ch[5] = {'M', 'A', 'R', 'C', 'H'};
    std::vector<long> v(5, 0);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 5;j++){
            if(s[i][0] == ch[j]){
                ++v[j];
                break;
            }
        }
    }
    std::vector<int> a = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
    std::vector<int> b = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
    std::vector<int> c = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};
    long res = 0;
    for(int i = 0; i < 10;i++){
        res += v[a[i]] * v[b[i]] * v[c[i]];
    }
    std::cout<<res<<std::endl;
    return 0;
}
