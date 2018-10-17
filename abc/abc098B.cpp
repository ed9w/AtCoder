#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int N;
    std::string S;
    std::cin>>N>>S;

    int k = 0;
    for(int i = 1;i < N;i++){
        int cnt = 0;
        for(char c = 'a';c <= 'z';c++){
            bool x = false;
            bool y = false;

            for(int j = 0;j < i;j++){
                if(S[j] == c){
                    x = true;
                }
            }
            for(int j = i;j < N;j++){
                if(S[j] == c){
                    y = true;
                }
            }
            if(x && y){
                cnt++;
            }
        }
        if(k < cnt){
            k = cnt;
        }
    }
    std::cout<<k<<std::endl;
    return 0;
}
