#include <iostream>
#include <string>

int main(){
    std::string S, T;
    std::cin>>S>>T;

    bool flag = false;
    for(int i = 0;i < S.size();i++){
        if(S == T){
            flag = true;
            break;
        }
        S = S.back() + S.substr(0, S.size()-1);
    }
    std::cout<<(flag ? "Yes" : "No")<<std::endl;

    return 0;
}
