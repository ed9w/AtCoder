#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int x;
    std::cin>>x;

    int n = (int)sqrt(x);
    int ans = 1;
    for(int b = 1;b <= n;b++){
        int k = 1;
        for(int p = 2;p <= n;p++){
            int c = pow(b, p);
            if(c > x){
                if(p == 2){
                    break;
                }else{
                    k = c / b;
                    break;
                }
            }
        }
        if(ans < k){
            ans = k;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}
