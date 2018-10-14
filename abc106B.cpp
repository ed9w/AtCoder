#include <iostream>
#include <vector>

int n_fac(int n){
    int c = 2;
    if((n % 2) == 0){
        c++;
    }
    int k = 3;
    while(k < n){
        if((n % k) == 0){
            c++;
        }
        k += 2;
    }
    return c;
}
int main(){
    int N;
    std::cin>>N;

    int c = 0;
    for(int i = 1;i <= N;i+=2){
        if(n_fac(i) == 8){
            c++;
        }
    }
    std::cout<<c<<std::endl;
    return 0;

}
