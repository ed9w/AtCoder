#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin>>S;

    int low = 0;
    for(auto i = S.begin();i != S.end();i++){
        if(*i >= 'a' && *i <= 'z'){
            low++;
        }
    }
    int c = 0;
    for(auto i = S.begin()+2;i != S.end()-1;i++){
        if(*i == 'C'){
            c++;
        }
    }
    if((S[0] == 'A') && (S.length()-2 == low) && c == 1){
        std::cout<<"AC"<<std::endl;
    }else{
        std::cout<<"WA"<<std::endl;
    }
    return 0;
}
