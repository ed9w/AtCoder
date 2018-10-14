#include <iostream>
#include <cmath>

int digit(int n){
    int c = 0;
    while(n % 100 == 0){
        n /= 100;
        c++;
    }
    return c;
}

int main(){
    int D, N;
    std::cin>>D>>N;

    int cnt = 0;
    int k = 0;
    while(cnt < N){
        k++;
        if(digit(k) == D){
            cnt++;
        }
    }
    std::cout<<cnt<<std::endl;
    return 0;
}
