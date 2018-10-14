#include <iostream>

int main(){
  int A, B;
  std::cin>>A>>B;
  if((A % 2 == 1) && (B % 2 == 1)){
    std::cout<<"Yes"<<std::endl;
  }else{
    std::cout<<"No"<<std::endl;
  }
  return 0;
}
