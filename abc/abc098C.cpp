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
    std::string s;
    std::cin>>n;
    std::cin>>s;

    std::vector<int> wcnt;
    std::vector<int> ecnt;
    int w = 0;
    int e = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == 'W'){
            ++w;
        }
        if(s[i] == 'E'){
            ++e;
        }
        wcnt.push_back(w);
        ecnt.push_back(e);
    }

    int m = ecnt[n - 1];
    int first = ecnt[n - 1] - ecnt[0];
    int end = wcnt[n - 2];
    //std::cout<<"first:"<<first<<"end:"<<end<<std::endl;
    int res = std::min(first, end);
    for(int i = 1;i < n - 1;i++){
        int c = wcnt[i -1] + (m - ecnt[i]);
        //std::cout<<i<<":"<<c<<std::endl;
        if(c < res){
            res = c;
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}
