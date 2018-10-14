#include <iostream>

int main(){
    int N;
    std::cin>>N;

    int n = (N / 7);
    bool flag = false;
    for(int i = 0;i <= n;i++){
        if(((N - 7 * i) % 4) == 0){
            flag = true;
            break;
        }
    }
    std::cout<<(flag ? "Yes" : "No")<<std::endl;
    return 0;
}
